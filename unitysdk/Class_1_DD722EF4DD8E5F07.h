#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_611DAD94AB3EA361.h"
#include "unitysdk/MoleMole/HollowChessboard/HollowCell.h"
#include "unitysdk/MoleMole/HollowChessboard/HollowChessboardUID.h"
#include "unitysdk/System/Object.h"

namespace MoleMole::HollowChessboard { class HollowEntity; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_DD722EF4DD8E5F07_METHOD_1_6B3B01C155065C54_OFFSET UNITYSDK_OFFSET(0xAB37AA0)
#define CLASS_1_DD722EF4DD8E5F07_METHOD_1_7A0F67D0ABF6B357_OFFSET UNITYSDK_OFFSET(0xAB38340)
#define CLASS_1_DD722EF4DD8E5F07_METHOD_1_8B202FDDEEDA5639_OFFSET UNITYSDK_OFFSET(0xAB380C0)
#define CLASS_1_DD722EF4DD8E5F07_METHOD_1_ADA49E236E8374BF_OFFSET UNITYSDK_OFFSET(0xAB37DD0)
#define CLASS_1_DD722EF4DD8E5F07_METHOD_1_D1628D1B70D91515_OFFSET UNITYSDK_OFFSET(0xAB37EF0)
#define CLASS_1_DD722EF4DD8E5F07__CTOR_OFFSET UNITYSDK_OFFSET(0xAB37A90)

inline static constexpr unsigned int Class_1_DD722EF4DD8E5F07_TypeDefinitionIndex = 40076;

class Class_1_DD722EF4DD8E5F07 : public ::System::Object
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_DD722EF4DD8E5F07__CTOR_OFFSET))(this);
	}

	static ::System::Boolean Method_1_6B3B01C155065C54(::MoleMole::HollowChessboard::HollowCell a1, ::Enum_3_611DAD94AB3EA361 a2)
	{
		return ((::System::Boolean(*)(::MoleMole::HollowChessboard::HollowCell, ::Enum_3_611DAD94AB3EA361))((::PBYTE)hIl2Cpp + CLASS_1_DD722EF4DD8E5F07_METHOD_1_6B3B01C155065C54_OFFSET))(a1, a2);
	}

	static ::System::Boolean Method_1_ADA49E236E8374BF(::MoleMole::HollowChessboard::HollowChessboardUID a1, ::MoleMole::HollowChessboard::HollowCell a2)
	{
		return ((::System::Boolean(*)(::MoleMole::HollowChessboard::HollowChessboardUID, ::MoleMole::HollowChessboard::HollowCell))((::PBYTE)hIl2Cpp + CLASS_1_DD722EF4DD8E5F07_METHOD_1_ADA49E236E8374BF_OFFSET))(a1, a2);
	}

	static ::MoleMole::HollowChessboard::HollowCell Method_1_8B202FDDEEDA5639(::MoleMole::HollowChessboard::HollowChessboardUID a1, ::MoleMole::HollowChessboard::HollowCell a2)
	{
		return ((::MoleMole::HollowChessboard::HollowCell(*)(::MoleMole::HollowChessboard::HollowChessboardUID, ::MoleMole::HollowChessboard::HollowCell))((::PBYTE)hIl2Cpp + CLASS_1_DD722EF4DD8E5F07_METHOD_1_8B202FDDEEDA5639_OFFSET))(a1, a2);
	}

	static ::MoleMole::HollowChessboard::HollowEntity* Method_1_D1628D1B70D91515(::System::Collections::Generic::List_1<::MoleMole::HollowChessboard::HollowEntity*>* a1)
	{
		return ((::MoleMole::HollowChessboard::HollowEntity*(*)(::System::Collections::Generic::List_1<::MoleMole::HollowChessboard::HollowEntity*>*))((::PBYTE)hIl2Cpp + CLASS_1_DD722EF4DD8E5F07_METHOD_1_D1628D1B70D91515_OFFSET))(a1);
	}

	static ::System::Boolean Method_1_7A0F67D0ABF6B357(::MoleMole::HollowChessboard::HollowChessboardUID a1, ::MoleMole::HollowChessboard::HollowCell a2)
	{
		return ((::System::Boolean(*)(::MoleMole::HollowChessboard::HollowChessboardUID, ::MoleMole::HollowChessboard::HollowCell))((::PBYTE)hIl2Cpp + CLASS_1_DD722EF4DD8E5F07_METHOD_1_7A0F67D0ABF6B357_OFFSET))(a1, a2);
	}
};
