let twoFer = (name: option(string)) => {
  let updatedName =
    switch (name) {
    | None => "you"
    | Some(_n) => _n
    };
  {j|One for $updatedName, one for me.|j};
};
