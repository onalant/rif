from rif import rcl  # rosetta compatibility layer


def main():
    pep_atoms = rcl.atoms(peptide, sel='heavy')
    pose_atoms = rcl.atoms(pose, sel='heavy')
    pose_stubs = rcl.stubs(pose, sel='protein')
    pose_atom_index = AtomIndexOneSide(numpy_atoms)
    pose_stub_index = StubIndexOneSide(numpy_stubs)


if __name__ == '__main__':
    main()
