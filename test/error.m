morph ToFilter mutates Filter {
  filtered: (self) =>
    after_every(
      type(self),
      (each) =>
        self.'predicate'(each.'current_element')
          ? ListElement({this=each.'filtered', __next__=each.'current_element'})
          -> each.'filtered',
      'current_element',
    )
}
