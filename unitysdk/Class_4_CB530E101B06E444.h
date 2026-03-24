#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_3_BC82EF9085BE2056.h"
#include "unitysdk/MoleMole/HollowChessboard/HollowCell.h"
#include "unitysdk/MoleMole/HollowChessboard/HollowChessboardUID.h"

class Class_5_4019A5E2CD84D24E;
namespace MoleMole::HollowChessboard { class HollowEntity; }
namespace Nap::NapECS { class EcsComponent; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_4_CB530E101B06E444_METHOD_4_06D38440AD239D8B_OFFSET UNITYSDK_OFFSET(0x83CC8B0)
#define CLASS_4_CB530E101B06E444_METHOD_4_5E4FAF45B7E36AA2_OFFSET UNITYSDK_OFFSET(0x83CCB30)
#define CLASS_4_CB530E101B06E444_METHOD_4_80011EBDA527A650_OFFSET UNITYSDK_OFFSET(0x83CCD60)
#define CLASS_4_CB530E101B06E444_METHOD_4_916AA21A2F26DD5E_OFFSET UNITYSDK_OFFSET(0x83CBCA0)
#define CLASS_4_CB530E101B06E444_METHOD_4_D279183863085EC4_OFFSET UNITYSDK_OFFSET(0x83CBFE0)
#define CLASS_4_CB530E101B06E444_METHOD_4_E58F49B2CB0ED2DD_OFFSET UNITYSDK_OFFSET(0x83CC110)
#define CLASS_4_CB530E101B06E444__CCTOR_OFFSET UNITYSDK_OFFSET(0x83CBF40)
#define CLASS_4_CB530E101B06E444__CTOR_OFFSET UNITYSDK_OFFSET(0x83CBEF0)

inline static constexpr unsigned int Class_4_CB530E101B06E444_TypeDefinitionIndex = 39270;

class Class_4_CB530E101B06E444 : public ::Class_3_BC82EF9085BE2056
{
public:
	static ::System::Collections::Generic::Dictionary_2<::MoleMole::HollowChessboard::HollowChessboardUID, ::System::Collections::Generic::Dictionary_2<::MoleMole::HollowChessboard::HollowCell, ::MoleMole::HollowChessboard::HollowEntity*>*>** StaticGet_Field_4_0()
	{
		return (::System::Collections::Generic::Dictionary_2<::MoleMole::HollowChessboard::HollowChessboardUID, ::System::Collections::Generic::Dictionary_2<::MoleMole::HollowChessboard::HollowCell, ::MoleMole::HollowChessboard::HollowEntity*>*>**)Il2CppClass::FromTypeDefinitionIndex(Class_4_CB530E101B06E444_TypeDefinitionIndex)->GetStaticField(0x3AB00);
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_CB530E101B06E444__CTOR_OFFSET))(this);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_4_CB530E101B06E444__CCTOR_OFFSET))();
	}

	::System::Collections::Generic::List_1<::Nap::NapECS::EcsComponent*>* Method_4_916AA21A2F26DD5E()
	{
		return ((::System::Collections::Generic::List_1<::Nap::NapECS::EcsComponent*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_CB530E101B06E444_METHOD_4_916AA21A2F26DD5E_OFFSET))(this);
	}

	static ::Class_4_CB530E101B06E444* Method_4_D279183863085EC4()
	{
		return ((::Class_4_CB530E101B06E444*(*)())((::PBYTE)hIl2Cpp + CLASS_4_CB530E101B06E444_METHOD_4_D279183863085EC4_OFFSET))();
	}

	::MoleMole::HollowChessboard::HollowEntity* Method_4_E58F49B2CB0ED2DD(::MoleMole::HollowChessboard::HollowCell a1, ::MoleMole::HollowChessboard::HollowChessboardUID a2)
	{
		return ((::MoleMole::HollowChessboard::HollowEntity*(*)(::PVOID, ::MoleMole::HollowChessboard::HollowCell, ::MoleMole::HollowChessboard::HollowChessboardUID))((::PBYTE)hIl2Cpp + CLASS_4_CB530E101B06E444_METHOD_4_E58F49B2CB0ED2DD_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_4_06D38440AD239D8B(::MoleMole::HollowChessboard::HollowChessboardUID a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::MoleMole::HollowChessboard::HollowChessboardUID))((::PBYTE)hIl2Cpp + CLASS_4_CB530E101B06E444_METHOD_4_06D38440AD239D8B_OFFSET))(this, a1);
	}

	static ::Class_5_4019A5E2CD84D24E* Method_4_5E4FAF45B7E36AA2(::MoleMole::HollowChessboard::HollowChessboardUID a1, ::MoleMole::HollowChessboard::HollowCell a2)
	{
		return ((::Class_5_4019A5E2CD84D24E*(*)(::MoleMole::HollowChessboard::HollowChessboardUID, ::MoleMole::HollowChessboard::HollowCell))((::PBYTE)hIl2Cpp + CLASS_4_CB530E101B06E444_METHOD_4_5E4FAF45B7E36AA2_OFFSET))(a1, a2);
	}

	::System::Void Method_4_80011EBDA527A650(::MoleMole::HollowChessboard::HollowChessboardUID a1, ::MoleMole::HollowChessboard::HollowChessboardUID a2)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::HollowChessboard::HollowChessboardUID, ::MoleMole::HollowChessboard::HollowChessboardUID))((::PBYTE)hIl2Cpp + CLASS_4_CB530E101B06E444_METHOD_4_80011EBDA527A650_OFFSET))(this, a1, a2);
	}
};
