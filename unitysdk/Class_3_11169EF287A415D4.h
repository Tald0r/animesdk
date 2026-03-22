#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_F3CFF1AFF7EE7DCD.h"
#include "unitysdk/MoleMole/Battle/InspireZoneOperationType.h"

#define CLASS_3_11169EF287A415D4_GETCLASSID_OFFSET UNITYSDK_OFFSET(0x62C4CB0)
#define CLASS_3_11169EF287A415D4_METHOD_3_41F329F901906F10_OFFSET UNITYSDK_OFFSET(0x62C5010)
#define CLASS_3_11169EF287A415D4_METHOD_3_46206B56BD30B28B_OFFSET UNITYSDK_OFFSET(0x62C4F30)
#define CLASS_3_11169EF287A415D4_METHOD_3_9E6DBA2C821ECF05_OFFSET UNITYSDK_OFFSET(0x62C4DB0)
#define CLASS_3_11169EF287A415D4_METHOD_3_A1D8CD775DEC3C21_OFFSET UNITYSDK_OFFSET(0x62C4FB0)
#define CLASS_3_11169EF287A415D4_METHOD_3_C06A64C53990BFA2_OFFSET UNITYSDK_OFFSET(0x62C50A0)
#define CLASS_3_11169EF287A415D4_METHOD_3_C74CF020AA42ED85_OFFSET UNITYSDK_OFFSET(0x62C50B0)
#define CLASS_3_11169EF287A415D4_METHOD_3_CCBE730AF445BBD4_OFFSET UNITYSDK_OFFSET(0x62C50C0)
#define CLASS_3_11169EF287A415D4_ONCLEAN_OFFSET UNITYSDK_OFFSET(0x62C4C30)
#define CLASS_3_11169EF287A415D4__CCTOR_OFFSET UNITYSDK_OFFSET(0x62C4D10)
#define CLASS_3_11169EF287A415D4__CTOR_OFFSET UNITYSDK_OFFSET(0x62C4D90)

inline static constexpr unsigned int Class_3_11169EF287A415D4_TypeDefinitionIndex = 64921;

class Class_3_11169EF287A415D4 : public ::Class_2_F3CFF1AFF7EE7DCD
{
public:
	// static const ::System::Int32 Field_3_6 = 0x74; // 0x0
	::System::Single Field_3_5; // 0x48
	::MoleMole::Battle::InspireZoneOperationType Field_3_4; // 0x4C
	::System::Single Field_3_3; // 0x50
	::System::Single Field_3_2; // 0x54
	::System::Boolean Field_3_1; // 0x58
	::System::Int32 Field_3_0; // 0x5C

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_3_11169EF287A415D4__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_11169EF287A415D4__CTOR_OFFSET))(this);
	}

	::System::Void OnClean()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_11169EF287A415D4_ONCLEAN_OFFSET))(this);
	}

	::System::Int32 GetClassID()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_11169EF287A415D4_GETCLASSID_OFFSET))(this);
	}

	::System::Void Method_3_9E6DBA2C821ECF05(::MoleMole::Battle::InspireZoneOperationType a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::InspireZoneOperationType))((::PBYTE)hIl2Cpp + CLASS_3_11169EF287A415D4_METHOD_3_9E6DBA2C821ECF05_OFFSET))(this, a1);
	}

	::Class_3_11169EF287A415D4* Method_3_46206B56BD30B28B()
	{
		return ((::Class_3_11169EF287A415D4*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_11169EF287A415D4_METHOD_3_46206B56BD30B28B_OFFSET))(this);
	}

	::System::Int32 Method_3_A1D8CD775DEC3C21()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_11169EF287A415D4_METHOD_3_A1D8CD775DEC3C21_OFFSET))(this);
	}

	::System::Void Method_3_41F329F901906F10(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_3_11169EF287A415D4_METHOD_3_41F329F901906F10_OFFSET))(this, a1);
	}

	::MoleMole::Battle::InspireZoneOperationType Method_3_C06A64C53990BFA2()
	{
		return ((::MoleMole::Battle::InspireZoneOperationType(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_11169EF287A415D4_METHOD_3_C06A64C53990BFA2_OFFSET))(this);
	}

	::System::Int32 Method_3_C74CF020AA42ED85()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_11169EF287A415D4_METHOD_3_C74CF020AA42ED85_OFFSET))(this);
	}

	static ::Class_3_11169EF287A415D4* Method_3_CCBE730AF445BBD4()
	{
		return ((::Class_3_11169EF287A415D4*(*)())((::PBYTE)hIl2Cpp + CLASS_3_11169EF287A415D4_METHOD_3_CCBE730AF445BBD4_OFFSET))();
	}
};
