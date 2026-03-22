#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Monster/SymmetryMatrixList.h"

class Class_1_B08665FEB7112467;
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }

#define MOLEMOLE_MONSTER_MONSTERCAMPCOLLISIONMATRIX_METHOD_2_5F6398776E49CD87_OFFSET UNITYSDK_OFFSET(0xB3BD570)
#define MOLEMOLE_MONSTER_MONSTERCAMPCOLLISIONMATRIX_METHOD_2_8C1351449838A709_OFFSET UNITYSDK_OFFSET(0xB3BD310)
#define MOLEMOLE_MONSTER_MONSTERCAMPCOLLISIONMATRIX_METHOD_2_95780ED94B90ED36_OFFSET UNITYSDK_OFFSET(0xB3BD620)
#define MOLEMOLE_MONSTER_MONSTERCAMPCOLLISIONMATRIX_METHOD_2_AE3296BC584E574B_OFFSET UNITYSDK_OFFSET(0xB3BCF20)
#define MOLEMOLE_MONSTER_MONSTERCAMPCOLLISIONMATRIX_METHOD_2_E7EF6BC52B28648C_OFFSET UNITYSDK_OFFSET(0xB3BD470)
#define MOLEMOLE_MONSTER_MONSTERCAMPCOLLISIONMATRIX__CTOR_OFFSET UNITYSDK_OFFSET(0xB3BCD40)

namespace MoleMole::Monster
{
	inline static constexpr unsigned int MonsterCampCollisionMatrix_TypeDefinitionIndex = 49667;

	class MonsterCampCollisionMatrix : public ::MoleMole::Monster::SymmetryMatrixList
	{
	public:
		// static const ::System::Int32 INVALID_CAMP_INDEX = 0xFFFFFFFF; // 0x0
		::Class_1_B08665FEB7112467* Drawer; // 0x20
		::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* ItemMap; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONSTER_MONSTERCAMPCOLLISIONMATRIX__CTOR_OFFSET))(this);
		}

		::System::Boolean Method_2_AE3296BC584E574B(::System::Int32 a1, ::System::Collections::Generic::IEnumerable_1<::System::Int32>* a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::System::Collections::Generic::IEnumerable_1<::System::Int32>*))((::PBYTE)hIl2Cpp + MOLEMOLE_MONSTER_MONSTERCAMPCOLLISIONMATRIX_METHOD_2_AE3296BC584E574B_OFFSET))(this, a1, a2);
		}

		::System::Int32 Method_2_8C1351449838A709(::System::Int32 a1)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_MONSTER_MONSTERCAMPCOLLISIONMATRIX_METHOD_2_8C1351449838A709_OFFSET))(this, a1);
		}

		::System::Void Method_2_E7EF6BC52B28648C()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONSTER_MONSTERCAMPCOLLISIONMATRIX_METHOD_2_E7EF6BC52B28648C_OFFSET))(this);
		}

		::System::Boolean Method_2_5F6398776E49CD87(::System::Int32 a1, ::System::Int32 a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_MONSTER_MONSTERCAMPCOLLISIONMATRIX_METHOD_2_5F6398776E49CD87_OFFSET))(this, a1, a2);
		}

		::System::Int32 Method_2_95780ED94B90ED36()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONSTER_MONSTERCAMPCOLLISIONMATRIX_METHOD_2_95780ED94B90ED36_OFFSET))(this);
		}
	};
}
