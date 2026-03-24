#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/SingletonDisposable_1.h"

class Class_3_F33F9DC5F4112336;
namespace MoleMole { class DynamicBoneGroup; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_2_F5D0F90345182A36_DISPOSE_OFFSET UNITYSDK_OFFSET(0x82650C0)
#define CLASS_2_F5D0F90345182A36_METHOD_2_09A7DACAB84FF0AC_OFFSET UNITYSDK_OFFSET(0x8265F30)
#define CLASS_2_F5D0F90345182A36_METHOD_2_12714708452CCC10_OFFSET UNITYSDK_OFFSET(0x8266220)
#define CLASS_2_F5D0F90345182A36_METHOD_2_1C0B95230B6C58A9_OFFSET UNITYSDK_OFFSET(0x8265D30)
#define CLASS_2_F5D0F90345182A36_METHOD_2_30A2382C3FCC5386_OFFSET UNITYSDK_OFFSET(0x8265540)
#define CLASS_2_F5D0F90345182A36_METHOD_2_35E39BDCA7D89A12_OFFSET UNITYSDK_OFFSET(0x8265960)
#define CLASS_2_F5D0F90345182A36_METHOD_2_47C1C89E977989CC_OFFSET UNITYSDK_OFFSET(0x82658B0)
#define CLASS_2_F5D0F90345182A36_METHOD_2_7206DC8F66A4D2A8_OFFSET UNITYSDK_OFFSET(0x82660E0)
#define CLASS_2_F5D0F90345182A36_METHOD_2_B15FA47FBE35BA3F_OFFSET UNITYSDK_OFFSET(0x8266480)
#define CLASS_2_F5D0F90345182A36_METHOD_2_C145705A054F47D2_1_OFFSET UNITYSDK_OFFSET(0x8265B60)
#define CLASS_2_F5D0F90345182A36_METHOD_2_C145705A054F47D2_OFFSET UNITYSDK_OFFSET(0x8265360)
#define CLASS_2_F5D0F90345182A36_METHOD_2_D9EAE2CFA3709229_OFFSET UNITYSDK_OFFSET(0x8266540)
#define CLASS_2_F5D0F90345182A36_METHOD_2_E1152AED493A6AF7_OFFSET UNITYSDK_OFFSET(0x82662F0)
#define CLASS_2_F5D0F90345182A36_ONCREATE_OFFSET UNITYSDK_OFFSET(0x8265120)
#define CLASS_2_F5D0F90345182A36_UPDATE_OFFSET UNITYSDK_OFFSET(0x8265180)
#define CLASS_2_F5D0F90345182A36__CCTOR_OFFSET UNITYSDK_OFFSET(0x82658A0)
#define CLASS_2_F5D0F90345182A36__CTOR_OFFSET UNITYSDK_OFFSET(0x82657D0)

inline static constexpr unsigned int Class_2_F5D0F90345182A36_TypeDefinitionIndex = 50384;

class Class_2_F5D0F90345182A36 : public ::Foundation::SingletonDisposable_1<::Class_2_F5D0F90345182A36*>
{
public:
	static ::System::Boolean* StaticGet_Field_2_0()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Class_2_F5D0F90345182A36_TypeDefinitionIndex)->GetStaticField(0xDE70);
	}
	::System::Collections::Generic::List_1<::Class_3_F33F9DC5F4112336*>* Field_2_2; // 0x10
	::System::Collections::Generic::List_1<::MoleMole::DynamicBoneGroup*>* Field_2_1; // 0x18
	::System::UInt32 Field_2_3; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_F5D0F90345182A36__CTOR_OFFSET))(this);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_2_F5D0F90345182A36__CCTOR_OFFSET))();
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_F5D0F90345182A36_DISPOSE_OFFSET))(this);
	}

	::System::Void OnCreate()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_F5D0F90345182A36_ONCREATE_OFFSET))(this);
	}

	::System::Void Update(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_F5D0F90345182A36_UPDATE_OFFSET))(this, a1);
	}

	::System::Void Method_2_C145705A054F47D2(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_F5D0F90345182A36_METHOD_2_C145705A054F47D2_OFFSET))(this, a1);
	}

	::System::Void Method_2_47C1C89E977989CC(::MoleMole::DynamicBoneGroup* a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::DynamicBoneGroup*))((::PBYTE)hIl2Cpp + CLASS_2_F5D0F90345182A36_METHOD_2_47C1C89E977989CC_OFFSET))(this, a1);
	}

	::System::Void Method_2_35E39BDCA7D89A12(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_F5D0F90345182A36_METHOD_2_35E39BDCA7D89A12_OFFSET))(this, a1);
	}

	::System::Void Method_2_C145705A054F47D2_1(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_F5D0F90345182A36_METHOD_2_C145705A054F47D2_1_OFFSET))(this, a1);
	}

	::System::Void Method_2_30A2382C3FCC5386()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_F5D0F90345182A36_METHOD_2_30A2382C3FCC5386_OFFSET))(this);
	}

	::System::Void Method_2_1C0B95230B6C58A9(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_F5D0F90345182A36_METHOD_2_1C0B95230B6C58A9_OFFSET))(this, a1);
	}

	::System::Void Method_2_09A7DACAB84FF0AC(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_F5D0F90345182A36_METHOD_2_09A7DACAB84FF0AC_OFFSET))(this, a1);
	}

	::System::Void Method_2_7206DC8F66A4D2A8()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_F5D0F90345182A36_METHOD_2_7206DC8F66A4D2A8_OFFSET))(this);
	}

	::System::Void Method_2_12714708452CCC10(::MoleMole::DynamicBoneGroup* a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::DynamicBoneGroup*))((::PBYTE)hIl2Cpp + CLASS_2_F5D0F90345182A36_METHOD_2_12714708452CCC10_OFFSET))(this, a1);
	}

	::System::Void Method_2_E1152AED493A6AF7(::Class_3_F33F9DC5F4112336* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_3_F33F9DC5F4112336*))((::PBYTE)hIl2Cpp + CLASS_2_F5D0F90345182A36_METHOD_2_E1152AED493A6AF7_OFFSET))(this, a1);
	}

	::System::Void Method_2_B15FA47FBE35BA3F(::MoleMole::DynamicBoneGroup* a1, ::MoleMole::DynamicBoneGroup* a2)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::DynamicBoneGroup*, ::MoleMole::DynamicBoneGroup*))((::PBYTE)hIl2Cpp + CLASS_2_F5D0F90345182A36_METHOD_2_B15FA47FBE35BA3F_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_D9EAE2CFA3709229(::Class_3_F33F9DC5F4112336* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_3_F33F9DC5F4112336*))((::PBYTE)hIl2Cpp + CLASS_2_F5D0F90345182A36_METHOD_2_D9EAE2CFA3709229_OFFSET))(this, a1);
	}
};
