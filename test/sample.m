morph ToFilter mutates Filter {
  filtered:
    after_every(
      func (each) => a
       ? b -> c
    )
}