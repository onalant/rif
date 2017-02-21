import os
import riflib.sampling.orientations as ori
import pandas as pd
import numpy as np

import sys
if sys.version_info[0] < 3:
    from StringIO import StringIO
else:
    from io import StringIO


DATA_PATH = 'data/orientations/karney/'

karney_index_str = """
name               N radius   cover   delta  extra
c48u1             24 62.80  1.57514 0.70000  0.00
c48n9            216 36.47  2.89689 0.26091  7.00
c48u27           648 20.83  1.64091 0.33582  0.00
c48u83          1992 16.29  2.42065 0.25970  0.00
c48u181         4344 12.29  2.27013 0.19415  0.00
c48n309         7416  9.72  1.91567 0.15167  1.86
c48n527        12648  8.17  1.94334 0.12599  1.86
c48u815        19560  7.40  2.23719 0.11607  0.00
c48u1153       27672  6.60  2.23735 0.10330  0.00
c48u1201       28824  6.48  2.20918 0.09999  0.00
c48u1641       39384  5.75  2.10646 0.08993  0.00
c48u2219       53256  5.27  2.20117 0.08249  0.00
c48u2867       68808  5.24  2.79649 0.07531  0.00
c48u2947       70728  4.71  2.07843 0.07359  0.00
c48u3733       89592  4.37  2.11197 0.06836  0.00
c48u4749      113976  4.00  2.05300 0.06248  0.00
c48u5879      141096  3.74  2.07325 0.05837  0.00
c48u7111      170664  3.53  2.11481 0.05514  0.00
c48u8649      207576  3.26  2.02898 0.05094  0.00
c48u10305     247320  3.102 2.08130 0.048456 2/41.2973
c48u12251     294024  2.903 2.02950 0.045354 2s/18.2657
c48u14251     342024  2.767 2.04269 0.043215 2/46.2973
c48u16533     396792  2.655 2.09385 0.041421 2/48.2973
c48u19181     460344  2.497 2.02149 0.039000 2s/21.2450
c48u21863     524712  2.403 2.05419 0.037534 2/53.2973
c48u25039     600936  2.282 2.01458 0.035641 2s/23.2450
c48u28329     679896  2.197 2.03407 0.034313 2/58.2973
c48u31793     763032  2.162 2.17361 0.033137 #
c48u32081     769944  2.116 2.05852 0.032786 #
c48u35851     860424  2.024 2.01113 0.031601 2/63.2973
c48u40003     960072  1.962 2.04420 0.030633 2/65.2973
c48u44709    1073016  1.877 2.00081 0.029307 2s/28.2657
c48u49397    1185528  1.822 2.02304 0.028453 2/70.2973
c48u54799    1315176  1.753 1.99776 0.027370 2s/30.2657
c48u60279    1446696  1.701 2.00892 0.026563 2/75.2973
c48u65985    1583640  1.657 2.03291 0.025876 2/77.2973
c48u72521    1740504  1.596 1.99529 0.024918 2s/33.2450
c48u79099    1898376  1.557 2.01914 0.024303 2/82.2973
c48u86451    2074824  1.505 1.99648 0.023504 2s/35.2450
c48u93701    2248824  1.467 2.00411 0.022911 2/87.2973
c48u101477   2435448  1.447 2.07920 0.022389 #
c48u101917   2446008  1.444 2.07768 0.022222 #
c48u110143   2643432  1.388 1.99316 0.021669 2/92.2973
c48u118647   2847528  1.358 2.01352 0.021210 2/94.2973
c48u128249   3077976  1.318 1.98655 0.020574 2s/40.2657
c48u137809   3307416  1.290 2.00301 0.020142 2/99.2973
c48u148395   3561480  1.255 1.98744 0.019600 2s/42.2657
c48u158763   3810312  1.228 1.99130 0.019176 2/104.2973
c48u169757   4074168  1.205 2.01122 0.018815 2/106.2973
c48u181909   4365816  1.173 1.98631 0.018310 2s/45.2450
c48u193767   4650408  1.151 2.00013 0.017970 2/111.2973
c48u207023   4968552  1.123 1.98553 0.017535 2s/47.2450
c48u220121   5282904  1.102 1.99143 0.017197 2/116.2973
c48u233569   5605656  1.083 2.00765 0.016906 2/118.2973
c48u248571   5965704  1.056 1.98203 0.016488 2/121.2973
c48u263339   6320136  1.039 1.99944 0.016221 2/123.2973
c48u279565   6709560  1.015 1.98032 0.015850 2s/52.2657
c48u295333   7087992  0.999 1.99038 0.015589 2/128.2973
c48u312831   7507944  0.978 1.97997 0.015266 2s/54.2657
"""
karney_index = pd.read_csv(StringIO(karney_index_str), sep='\s+')


def karney_name_by_radius(cr):
    i = sum(karney_index.radius > cr)
    if i == karney_index.shape[0]:
        i -= 1
    return karney_index.iloc[i, 0]


def quaternion_set_with_covering_radius_degrees(cr=63):
    print os.getcwd()
    fname = DATA_PATH + karney_name_by_radius(cr) + '.grid.gz'
    return ori.read_karney_orientation_file(fname)
    print 'oarsitn'


def quaternion_set_by_name(name):
    fname = DATA_PATH + name + '.grid.gz'
    assert name in karney_index.name.values
    return ori.read_karney_orientation_file(fname)


def filter_quaternion_set_axis_within(quats, axis, angle):
    quats = np.quaternion.as_quat_array(quats)
    print quats[0]
