#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_F3CFF1AFF7EE7DCD.h"
#include "unitysdk/MoleMole/EntityHandle.h"
#include "unitysdk/Struct_2_FC595D1A561D8C6F_1.h"

class Class_0_16E4307DCC419505_180;
class Class_1_21A65CF0FB106B84;
class Class_3_28271F07DD4A0D2E;
class Class_3_F41D242A20F8FE06;
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_3_772D970B20F06EA6_GETCLASSID_OFFSET UNITYSDK_OFFSET(0x8283260)
#define CLASS_3_772D970B20F06EA6_METHOD_3_358A144584A5DBFC_OFFSET UNITYSDK_OFFSET(0x8283430)
#define CLASS_3_772D970B20F06EA6_METHOD_3_A1D8CD775DEC3C21_OFFSET UNITYSDK_OFFSET(0x82833D0)
#define CLASS_3_772D970B20F06EA6_METHOD_3_D93EC3DDD756C47C_OFFSET UNITYSDK_OFFSET(0x82834E0)
#define CLASS_3_772D970B20F06EA6_ONCLEAN_OFFSET UNITYSDK_OFFSET(0x8282D70)
#define CLASS_3_772D970B20F06EA6__CCTOR_OFFSET UNITYSDK_OFFSET(0x82832C0)
#define CLASS_3_772D970B20F06EA6__CTOR_OFFSET UNITYSDK_OFFSET(0x8283340)

inline static constexpr unsigned int Class_3_772D970B20F06EA6_TypeDefinitionIndex = 65457;

class Class_3_772D970B20F06EA6 : public ::Class_2_F3CFF1AFF7EE7DCD
{
public:
	// static const ::System::Int32 Field_3_11 = 0xA3; // 0x0
	::System::Collections::Generic::List_1<::Class_0_16E4307DCC419505_180*>* Field_3_1; // 0x48
	::MoleMole::EntityHandle Field_3_4; // 0x50
	::System::Collections::Generic::List_1<::Class_1_21A65CF0FB106B84*>* Field_3_5; // 0x60
	::Class_3_F41D242A20F8FE06* Field_3_0; // 0x68
	::Class_3_28271F07DD4A0D2E* Field_3_2; // 0x70
	::MoleMole::EntityHandle Field_3_3; // 0x78
	::Struct_2_FC595D1A561D8C6F_1 Field_3_7; // 0x88
	::System::Single Field_3_10; // 0xA4
	::System::Single Field_3_9; // 0xA8
	::System::Int32 Field_3_8; // 0xAC
	::System::Boolean Field_3_6; // 0xB0

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_3_772D970B20F06EA6__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_772D970B20F06EA6__CTOR_OFFSET))(this);
	}

	::System::Void OnClean()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_772D970B20F06EA6_ONCLEAN_OFFSET))(this);
	}

	::System::Int32 GetClassID()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_772D970B20F06EA6_GETCLASSID_OFFSET))(this);
	}

	::System::Int32 Method_3_A1D8CD775DEC3C21()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_772D970B20F06EA6_METHOD_3_A1D8CD775DEC3C21_OFFSET))(this);
	}

	::Class_1_21A65CF0FB106B84* Method_3_358A144584A5DBFC()
	{
		return ((::Class_1_21A65CF0FB106B84*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_772D970B20F06EA6_METHOD_3_358A144584A5DBFC_OFFSET))(this);
	}

	static ::Class_3_772D970B20F06EA6* Method_3_D93EC3DDD756C47C()
	{
		return ((::Class_3_772D970B20F06EA6*(*)())((::PBYTE)hIl2Cpp + CLASS_3_772D970B20F06EA6_METHOD_3_D93EC3DDD756C47C_OFFSET))();
	}
};
