#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_3_95932C222EBC5BA5.h"
#include "unitysdk/MoleMole/HollowChessboard/HollowEntityMoveComponent_MoveCmd.h"
#include "unitysdk/Share/GridDir.h"

namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_4_7D378948BF91A800_GETCLASSID_OFFSET UNITYSDK_OFFSET(0xB5AC0D0)
#define CLASS_4_7D378948BF91A800_METHOD_4_725DE75E7E1BEE17_OFFSET UNITYSDK_OFFSET(0xB5AC3A0)
#define CLASS_4_7D378948BF91A800_METHOD_4_A1D8CD775DEC3C21_OFFSET UNITYSDK_OFFSET(0xB5AC550)
#define CLASS_4_7D378948BF91A800_ONCLEAN_OFFSET UNITYSDK_OFFSET(0xB5AC1B0)
#define CLASS_4_7D378948BF91A800__CCTOR_OFFSET UNITYSDK_OFFSET(0xB5AC130)
#define CLASS_4_7D378948BF91A800__CTOR_OFFSET UNITYSDK_OFFSET(0xB5AC280)

inline static constexpr unsigned int Class_4_7D378948BF91A800_TypeDefinitionIndex = 59201;

class Class_4_7D378948BF91A800 : public ::Class_3_95932C222EBC5BA5
{
public:
	// static const ::System::Int32 Field_4_0 = 0x108; // 0x0
	::System::Collections::Generic::List_1<::MoleMole::HollowChessboard::HollowEntityMoveComponent_MoveCmd>* Field_4_1; // 0x50
	::System::Collections::Generic::List_1<::MoleMole::HollowChessboard::HollowEntityMoveComponent_MoveCmd>* Field_4_2; // 0x58
	::Share::GridDir Field_4_5; // 0x60
	::System::Int32 Field_4_4; // 0x64
	::MoleMole::HollowChessboard::HollowEntityMoveComponent_MoveCmd Field_4_3; // 0x68

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_4_7D378948BF91A800__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_7D378948BF91A800__CTOR_OFFSET))(this);
	}

	::System::Int32 GetClassID()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_7D378948BF91A800_GETCLASSID_OFFSET))(this);
	}

	::System::Void OnClean()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_7D378948BF91A800_ONCLEAN_OFFSET))(this);
	}

	static ::Class_4_7D378948BF91A800* Method_4_725DE75E7E1BEE17()
	{
		return ((::Class_4_7D378948BF91A800*(*)())((::PBYTE)hIl2Cpp + CLASS_4_7D378948BF91A800_METHOD_4_725DE75E7E1BEE17_OFFSET))();
	}

	::System::Int32 Method_4_A1D8CD775DEC3C21()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_7D378948BF91A800_METHOD_4_A1D8CD775DEC3C21_OFFSET))(this);
	}
};
