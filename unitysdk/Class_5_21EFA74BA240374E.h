#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_4_BD70A24A36BF9EA1.h"
#include "unitysdk/MoleMole/HollowChessboard/HollowChessboardUID.h"

class Class_1_4502605F4267F6F1;
namespace MoleMole::HollowChessboard { class HollowEntity; }
namespace Nap::NapECS { class EcsComponent; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_5_21EFA74BA240374E_METHOD_5_1B633966DF2939D3_OFFSET UNITYSDK_OFFSET(0xB3C2D30)
#define CLASS_5_21EFA74BA240374E_METHOD_5_32EAF063CE746755_OFFSET UNITYSDK_OFFSET(0xB3C31E0)
#define CLASS_5_21EFA74BA240374E_METHOD_5_412041C99D7D5277_OFFSET UNITYSDK_OFFSET(0xB3C31D0)
#define CLASS_5_21EFA74BA240374E_METHOD_5_D331DD25BC818C3D_OFFSET UNITYSDK_OFFSET(0xB3C34D0)
#define CLASS_5_21EFA74BA240374E_METHOD_5_EA04A3ED6A803A6A_OFFSET UNITYSDK_OFFSET(0xB3C2FC0)
#define CLASS_5_21EFA74BA240374E__CTOR_OFFSET UNITYSDK_OFFSET(0xB3C2F00)

inline static constexpr unsigned int Class_5_21EFA74BA240374E_TypeDefinitionIndex = 46091;

class Class_5_21EFA74BA240374E : public ::Class_4_BD70A24A36BF9EA1
{
public:
	::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::UInt32>* Field_5_0; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_5_21EFA74BA240374E__CTOR_OFFSET))(this);
	}

	::System::Collections::Generic::List_1<::Nap::NapECS::EcsComponent*>* Method_5_1B633966DF2939D3()
	{
		return ((::System::Collections::Generic::List_1<::Nap::NapECS::EcsComponent*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_5_21EFA74BA240374E_METHOD_5_1B633966DF2939D3_OFFSET))(this);
	}

	::MoleMole::HollowChessboard::HollowEntity* Method_5_EA04A3ED6A803A6A(::MoleMole::HollowChessboard::HollowChessboardUID a1)
	{
		return ((::MoleMole::HollowChessboard::HollowEntity*(*)(::PVOID, ::MoleMole::HollowChessboard::HollowChessboardUID))((::PBYTE)hIl2Cpp + CLASS_5_21EFA74BA240374E_METHOD_5_EA04A3ED6A803A6A_OFFSET))(this, a1);
	}

	::System::Collections::Generic::List_1<::Nap::NapECS::EcsComponent*>* Method_5_412041C99D7D5277()
	{
		return ((::System::Collections::Generic::List_1<::Nap::NapECS::EcsComponent*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_5_21EFA74BA240374E_METHOD_5_412041C99D7D5277_OFFSET))(this);
	}

	::MoleMole::HollowChessboard::HollowEntity* Method_5_32EAF063CE746755(::System::UInt32 a1, ::MoleMole::HollowChessboard::HollowChessboardUID a2, ::System::UInt32 a3, ::Class_1_4502605F4267F6F1*& a4)
	{
		return ((::MoleMole::HollowChessboard::HollowEntity*(*)(::PVOID, ::System::UInt32, ::MoleMole::HollowChessboard::HollowChessboardUID, ::System::UInt32, ::Class_1_4502605F4267F6F1*&))((::PBYTE)hIl2Cpp + CLASS_5_21EFA74BA240374E_METHOD_5_32EAF063CE746755_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Void Method_5_D331DD25BC818C3D(::MoleMole::HollowChessboard::HollowEntity* a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::HollowChessboard::HollowEntity*))((::PBYTE)hIl2Cpp + CLASS_5_21EFA74BA240374E_METHOD_5_D331DD25BC818C3D_OFFSET))(this, a1);
	}
};
