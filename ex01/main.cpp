#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

int main() {
  // ClapTrap claptrap("Claptrap");
  // ClapTrap claptrap2(claptrap);
  // ClapTrap claptrap3 = claptrap;

  // claptrap.attack("enemy");
  // claptrap.takeDamage(11);
  // claptrap.beRepaired(3);

  ScavTrap scavtrap("Scavtrap");
  scavtrap.attack("enemy");
  scavtrap.takeDamage(11);
  scavtrap.beRepaired(3);
  scavtrap.guardGate();
  return 0;
}

/*
ScavTrap が作成されると、プログラムは ClapTrap
の構築から始まります。破壊は逆の順序で行われます。なぜでしょうか?

→この構築と破棄の順序は、クラス階層の正しい初期化と後処理を確保するために重要です。

初期化の保証:
基底クラスが先に初期化されることで、派生クラスのコンストラクタが正しく基底クラスのインスタンスを使用することができます。
後片付けの保証:
デストラクタの逆の順序で呼び出されることで、リソースの解放やクリーンアップが適切に行われます。
*/