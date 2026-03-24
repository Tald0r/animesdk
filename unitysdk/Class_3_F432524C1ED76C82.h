#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_F3CFF1AFF7EE7DCD.h"
#include "unitysdk/Class_3_F432524C1ED76C82_Struct_2_1F8F89E884923C37.h"
#include "unitysdk/Class_3_F432524C1ED76C82_Struct_2_5C84158E83C78A6E.h"

#define CLASS_3_F432524C1ED76C82_GETCLASSID_OFFSET UNITYSDK_OFFSET(0x967AAC0)
#define CLASS_3_F432524C1ED76C82_METHOD_3_A1D8CD775DEC3C21_OFFSET UNITYSDK_OFFSET(0x967ABB0)
#define CLASS_3_F432524C1ED76C82_METHOD_3_CCBE730AF445BBD4_OFFSET UNITYSDK_OFFSET(0x967AC10)
#define CLASS_3_F432524C1ED76C82_ONCLEAN_OFFSET UNITYSDK_OFFSET(0x967A8C0)
#define CLASS_3_F432524C1ED76C82__CCTOR_OFFSET UNITYSDK_OFFSET(0x967AB20)
#define CLASS_3_F432524C1ED76C82__CTOR_OFFSET UNITYSDK_OFFSET(0x967ABA0)

inline static constexpr unsigned int Class_3_F432524C1ED76C82_TypeDefinitionIndex = 71495;

class Class_3_F432524C1ED76C82 : public ::Class_2_F3CFF1AFF7EE7DCD
{
public:
	// static const ::System::Int32 Field_3_3 = 0x59; // 0x0
	::Il2CppArray<::Class_3_F432524C1ED76C82_Struct_2_5C84158E83C78A6E>* Field_3_2; // 0x48
	::Il2CppArray<::Class_3_F432524C1ED76C82_Struct_2_1F8F89E884923C37>* Field_3_1; // 0x50
	::System::Boolean Field_3_0; // 0x58

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_3_F432524C1ED76C82__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_F432524C1ED76C82__CTOR_OFFSET))(this);
	}

	::System::Void OnClean()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_F432524C1ED76C82_ONCLEAN_OFFSET))(this);
	}

	::System::Int32 GetClassID()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_F432524C1ED76C82_GETCLASSID_OFFSET))(this);
	}

	::System::Int32 Method_3_A1D8CD775DEC3C21()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_F432524C1ED76C82_METHOD_3_A1D8CD775DEC3C21_OFFSET))(this);
	}

	static ::Class_3_F432524C1ED76C82* Method_3_CCBE730AF445BBD4()
	{
		return ((::Class_3_F432524C1ED76C82*(*)())((::PBYTE)hIl2Cpp + CLASS_3_F432524C1ED76C82_METHOD_3_CCBE730AF445BBD4_OFFSET))();
	}
};
