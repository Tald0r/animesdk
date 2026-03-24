#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_3_BC82EF9085BE2056.h"

class Class_0_16E4307DCC419505_142;
namespace MoleMole::HollowChessboard { class HollowEntity; }
namespace Nap::NapECS { class EcsComponent; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_4_BD70A24A36BF9EA1_METHOD_4_6391990BEC459179_OFFSET UNITYSDK_OFFSET(0x15324700)
#define CLASS_4_BD70A24A36BF9EA1_METHOD_4_815684CAFA5E3BDA_OFFSET UNITYSDK_OFFSET(0x15324630)
#define CLASS_4_BD70A24A36BF9EA1_METHOD_4_AF0A46096639B704_OFFSET UNITYSDK_OFFSET(0x153240D0)
#define CLASS_4_BD70A24A36BF9EA1_METHOD_4_B4A9118F92EE6CE7_OFFSET UNITYSDK_OFFSET(0x15324DA0)
#define CLASS_4_BD70A24A36BF9EA1__CTOR_OFFSET UNITYSDK_OFFSET(0x153246B0)

inline static constexpr unsigned int Class_4_BD70A24A36BF9EA1_TypeDefinitionIndex = 62251;

class Class_4_BD70A24A36BF9EA1 : public ::Class_3_BC82EF9085BE2056
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_BD70A24A36BF9EA1__CTOR_OFFSET))(this);
	}

	::System::Collections::Generic::List_1<::Nap::NapECS::EcsComponent*>* Method_4_AF0A46096639B704()
	{
		return ((::System::Collections::Generic::List_1<::Nap::NapECS::EcsComponent*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_BD70A24A36BF9EA1_METHOD_4_AF0A46096639B704_OFFSET))(this);
	}

	::System::Void Method_4_815684CAFA5E3BDA(::System::Int32 a1, ::Class_0_16E4307DCC419505_142* a2, ::System::Collections::Generic::List_1<::Nap::NapECS::EcsComponent*>* a3)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::Class_0_16E4307DCC419505_142*, ::System::Collections::Generic::List_1<::Nap::NapECS::EcsComponent*>*))((::PBYTE)hIl2Cpp + CLASS_4_BD70A24A36BF9EA1_METHOD_4_815684CAFA5E3BDA_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_4_6391990BEC459179(::System::Int32 a1, ::Class_0_16E4307DCC419505_142* a2, ::System::Collections::Generic::List_1<::Nap::NapECS::EcsComponent*>* a3)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::Class_0_16E4307DCC419505_142*, ::System::Collections::Generic::List_1<::Nap::NapECS::EcsComponent*>*))((::PBYTE)hIl2Cpp + CLASS_4_BD70A24A36BF9EA1_METHOD_4_6391990BEC459179_OFFSET))(this, a1, a2, a3);
	}

	::MoleMole::HollowChessboard::HollowEntity* Method_4_B4A9118F92EE6CE7(::System::Int32 a1, ::Class_0_16E4307DCC419505_142* a2)
	{
		return ((::MoleMole::HollowChessboard::HollowEntity*(*)(::PVOID, ::System::Int32, ::Class_0_16E4307DCC419505_142*))((::PBYTE)hIl2Cpp + CLASS_4_BD70A24A36BF9EA1_METHOD_4_B4A9118F92EE6CE7_OFFSET))(this, a1, a2);
	}
};
