#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_1FD1CECAB456A68E.h"
#include "unitysdk/Enum_3_41BDD9D588006A51.h"
#include "unitysdk/Enum_3_8695B985D9217C13.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_500;
namespace MoleMole { class UIBaseController; }
namespace MoleMole { class UIInLevelRoleHudSmallWidgetChildWindowController; }
namespace MoleMole::Battle { class Entity; }
namespace System { template <typename T1, typename T2, typename T3> class Func_3; }
namespace System { template <typename T> class Func_1; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Transform; }

#define CLASS_1_4A3035A9993C000C_METHOD_1_02E0B9C79165F73F_OFFSET UNITYSDK_OFFSET(0x79F5210)
#define CLASS_1_4A3035A9993C000C_METHOD_1_07280B24DFAC0CA9_OFFSET UNITYSDK_OFFSET(0x79F78B0)
#define CLASS_1_4A3035A9993C000C_METHOD_1_0A50B8D0FB7E316B_OFFSET UNITYSDK_OFFSET(0x79F7E10)
#define CLASS_1_4A3035A9993C000C_METHOD_1_1A7F9F3B13A09C96_OFFSET UNITYSDK_OFFSET(0x79F64B0)
#define CLASS_1_4A3035A9993C000C_METHOD_1_20E31190F7F967C8_OFFSET UNITYSDK_OFFSET(0x79F6440)
#define CLASS_1_4A3035A9993C000C_METHOD_1_2BCB2CC214411258_OFFSET UNITYSDK_OFFSET(0x79F6FD0)
#define CLASS_1_4A3035A9993C000C_METHOD_1_5DB6E52EC3AD816D_OFFSET UNITYSDK_OFFSET(0x79F5A70)
#define CLASS_1_4A3035A9993C000C_METHOD_1_5E4FBE94ADC15CB3_OFFSET UNITYSDK_OFFSET(0x79F8150)
#define CLASS_1_4A3035A9993C000C_METHOD_1_657546073F49B10C_OFFSET UNITYSDK_OFFSET(0x79F72C0)
#define CLASS_1_4A3035A9993C000C_METHOD_1_7206DC8F66A4D2A8_OFFSET UNITYSDK_OFFSET(0x79F82B0)
#define CLASS_1_4A3035A9993C000C_METHOD_1_825A6E65071493A4_OFFSET UNITYSDK_OFFSET(0x79F77B0)
#define CLASS_1_4A3035A9993C000C_METHOD_1_89EF21CA0414B145_OFFSET UNITYSDK_OFFSET(0x79F56E0)
#define CLASS_1_4A3035A9993C000C_METHOD_1_8E09123A7B75854B_OFFSET UNITYSDK_OFFSET(0x79F5590)
#define CLASS_1_4A3035A9993C000C_METHOD_1_8F8F2CA92B98D223_OFFSET UNITYSDK_OFFSET(0x79F61B0)
#define CLASS_1_4A3035A9993C000C_METHOD_1_96E6D8283CC009AF_OFFSET UNITYSDK_OFFSET(0x79F7DB0)
#define CLASS_1_4A3035A9993C000C_METHOD_1_9AB816929FD5A562_OFFSET UNITYSDK_OFFSET(0x79F7670)
#define CLASS_1_4A3035A9993C000C_METHOD_1_B3BC933000085B6A_OFFSET UNITYSDK_OFFSET(0x79F73B0)
#define CLASS_1_4A3035A9993C000C_METHOD_1_B6C18427311D9926_OFFSET UNITYSDK_OFFSET(0x79F7E90)
#define CLASS_1_4A3035A9993C000C_METHOD_1_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x79F83F0)
#define CLASS_1_4A3035A9993C000C_METHOD_1_D799715F2EF979EA_OFFSET UNITYSDK_OFFSET(0x79F4DD0)
#define CLASS_1_4A3035A9993C000C_METHOD_1_EDA7FB4BCF7215A4_OFFSET UNITYSDK_OFFSET(0x79F5BC0)
#define CLASS_1_4A3035A9993C000C_METHOD_1_EDC9559BF212EFB3_OFFSET UNITYSDK_OFFSET(0x79F5E40)
#define CLASS_1_4A3035A9993C000C_METHOD_1_F0088C88851A7DFB_OFFSET UNITYSDK_OFFSET(0x79F8450)
#define CLASS_1_4A3035A9993C000C_METHOD_1_FBF96257B45B12EC_OFFSET UNITYSDK_OFFSET(0x79F6320)
#define CLASS_1_4A3035A9993C000C__CCTOR_OFFSET UNITYSDK_OFFSET(0x79F5180)
#define CLASS_1_4A3035A9993C000C__CTOR_1_OFFSET UNITYSDK_OFFSET(0x79F4FB0)
#define CLASS_1_4A3035A9993C000C__CTOR_OFFSET UNITYSDK_OFFSET(0x79F4C00)

inline static constexpr unsigned int Class_1_4A3035A9993C000C_TypeDefinitionIndex = 69251;

class Class_1_4A3035A9993C000C : public ::System::Object
{
public:
	static ::Il2CppArray<::Enum_3_8695B985D9217C13>** StaticGet_Field_1_0()
	{
		return (::Il2CppArray<::Enum_3_8695B985D9217C13>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_4A3035A9993C000C_TypeDefinitionIndex)->GetStaticField(0x42D60);
	}
	::System::Collections::Generic::List_1<::MoleMole::UIInLevelRoleHudSmallWidgetChildWindowController*>* Field_1_4; // 0x10
	::System::Func_3<::MoleMole::UIBaseController*, ::UnityEngine::Transform*, ::Class_0_16E4307DCC419505_500*>* Field_1_2; // 0x18
	::System::Collections::Generic::Dictionary_2<::Enum_3_8695B985D9217C13, ::System::Collections::Generic::List_1<::MoleMole::Battle::Entity*>*>* Field_1_7; // 0x20
	::System::Collections::Generic::Dictionary_2<::Enum_3_8695B985D9217C13, ::System::Boolean>* Field_1_1; // 0x28
	::System::Func_1<::System::Collections::Generic::IEnumerable_1<::MoleMole::Battle::Entity*>*>* Field_1_5; // 0x30
	::System::Boolean Field_1_9; // 0x38
	::System::Boolean Field_1_3; // 0x39
	::System::Boolean Field_1_6; // 0x3A
	::System::Boolean Field_1_8; // 0x3B

	::System::Void _ctor(::System::Collections::Generic::List_1<::MoleMole::UIInLevelRoleHudSmallWidgetChildWindowController*>* a1, ::System::Func_1<::System::Collections::Generic::IEnumerable_1<::MoleMole::Battle::Entity*>*>* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::MoleMole::UIInLevelRoleHudSmallWidgetChildWindowController*>*, ::System::Func_1<::System::Collections::Generic::IEnumerable_1<::MoleMole::Battle::Entity*>*>*))((::PBYTE)hIl2Cpp + CLASS_1_4A3035A9993C000C__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void _ctor_1(::MoleMole::UIInLevelRoleHudSmallWidgetChildWindowController* a1, ::MoleMole::UIInLevelRoleHudSmallWidgetChildWindowController* a2, ::System::Func_1<::System::Collections::Generic::IEnumerable_1<::MoleMole::Battle::Entity*>*>* a3)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::UIInLevelRoleHudSmallWidgetChildWindowController*, ::MoleMole::UIInLevelRoleHudSmallWidgetChildWindowController*, ::System::Func_1<::System::Collections::Generic::IEnumerable_1<::MoleMole::Battle::Entity*>*>*))((::PBYTE)hIl2Cpp + CLASS_1_4A3035A9993C000C__CTOR_1_OFFSET))(this, a1, a2, a3);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_4A3035A9993C000C__CCTOR_OFFSET))();
	}

	::System::Void Method_1_02E0B9C79165F73F(::Enum_3_1FD1CECAB456A68E a1, ::System::UInt32 a2)
	{
		return ((::System::Void(*)(::PVOID, ::Enum_3_1FD1CECAB456A68E, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_4A3035A9993C000C_METHOD_1_02E0B9C79165F73F_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_89EF21CA0414B145()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_4A3035A9993C000C_METHOD_1_89EF21CA0414B145_OFFSET))(this);
	}

	::System::Void Method_1_5DB6E52EC3AD816D(::Enum_3_41BDD9D588006A51 a1, ::System::UInt32 a2)
	{
		return ((::System::Void(*)(::PVOID, ::Enum_3_41BDD9D588006A51, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_4A3035A9993C000C_METHOD_1_5DB6E52EC3AD816D_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_EDA7FB4BCF7215A4(::System::Int32 a1, ::MoleMole::Battle::Entity* a2, ::System::Boolean a3, ::System::Boolean a4)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::MoleMole::Battle::Entity*, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_4A3035A9993C000C_METHOD_1_EDA7FB4BCF7215A4_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Int32 Method_1_EDC9559BF212EFB3()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_4A3035A9993C000C_METHOD_1_EDC9559BF212EFB3_OFFSET))(this);
	}

	::System::Void Method_1_D799715F2EF979EA()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_4A3035A9993C000C_METHOD_1_D799715F2EF979EA_OFFSET))(this);
	}

	::System::Void Method_1_20E31190F7F967C8(::System::Func_3<::MoleMole::UIBaseController*, ::UnityEngine::Transform*, ::Class_0_16E4307DCC419505_500*>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Func_3<::MoleMole::UIBaseController*, ::UnityEngine::Transform*, ::Class_0_16E4307DCC419505_500*>*))((::PBYTE)hIl2Cpp + CLASS_1_4A3035A9993C000C_METHOD_1_20E31190F7F967C8_OFFSET))(this, a1);
	}

	::System::Void Method_1_8E09123A7B75854B(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_4A3035A9993C000C_METHOD_1_8E09123A7B75854B_OFFSET))(this, a1);
	}

	::System::Void Method_1_2BCB2CC214411258(::System::Int32 a1, ::MoleMole::Battle::Entity* a2, ::System::Int32 a3)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::MoleMole::Battle::Entity*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_4A3035A9993C000C_METHOD_1_2BCB2CC214411258_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_1_657546073F49B10C(::Enum_3_8695B985D9217C13 a1, ::System::Boolean a2)
	{
		return ((::System::Void(*)(::PVOID, ::Enum_3_8695B985D9217C13, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_4A3035A9993C000C_METHOD_1_657546073F49B10C_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_B3BC933000085B6A(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_4A3035A9993C000C_METHOD_1_B3BC933000085B6A_OFFSET))(this, a1);
	}

	::System::Void Method_1_9AB816929FD5A562(::MoleMole::Battle::Entity* a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + CLASS_1_4A3035A9993C000C_METHOD_1_9AB816929FD5A562_OFFSET))(this, a1);
	}

	::System::Void Method_1_825A6E65071493A4(::MoleMole::UIInLevelRoleHudSmallWidgetChildWindowController* a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::UIInLevelRoleHudSmallWidgetChildWindowController*))((::PBYTE)hIl2Cpp + CLASS_1_4A3035A9993C000C_METHOD_1_825A6E65071493A4_OFFSET))(this, a1);
	}

	::System::Void Method_1_07280B24DFAC0CA9()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_4A3035A9993C000C_METHOD_1_07280B24DFAC0CA9_OFFSET))(this);
	}

	::System::Collections::Generic::List_1<::MoleMole::UIInLevelRoleHudSmallWidgetChildWindowController*>* Method_1_96E6D8283CC009AF()
	{
		return ((::System::Collections::Generic::List_1<::MoleMole::UIInLevelRoleHudSmallWidgetChildWindowController*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_4A3035A9993C000C_METHOD_1_96E6D8283CC009AF_OFFSET))(this);
	}

	::System::Void Method_1_0A50B8D0FB7E316B()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_4A3035A9993C000C_METHOD_1_0A50B8D0FB7E316B_OFFSET))(this);
	}

	::UnityEngine::Transform* Method_1_B6C18427311D9926(::MoleMole::Battle::Entity* a1)
	{
		return ((::UnityEngine::Transform*(*)(::PVOID, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + CLASS_1_4A3035A9993C000C_METHOD_1_B6C18427311D9926_OFFSET))(this, a1);
	}

	::System::Void Method_1_5E4FBE94ADC15CB3(::System::Int32 a1, ::System::UInt32 a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_4A3035A9993C000C_METHOD_1_5E4FBE94ADC15CB3_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_1A7F9F3B13A09C96(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_4A3035A9993C000C_METHOD_1_1A7F9F3B13A09C96_OFFSET))(this, a1);
	}

	::Enum_3_8695B985D9217C13 Method_1_8F8F2CA92B98D223(::MoleMole::Battle::Entity* a1)
	{
		return ((::Enum_3_8695B985D9217C13(*)(::PVOID, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + CLASS_1_4A3035A9993C000C_METHOD_1_8F8F2CA92B98D223_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_FBF96257B45B12EC(::Enum_3_8695B985D9217C13 a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Enum_3_8695B985D9217C13))((::PBYTE)hIl2Cpp + CLASS_1_4A3035A9993C000C_METHOD_1_FBF96257B45B12EC_OFFSET))(this, a1);
	}

	::System::Void Method_1_7206DC8F66A4D2A8()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_4A3035A9993C000C_METHOD_1_7206DC8F66A4D2A8_OFFSET))(this);
	}

	::System::Void Method_1_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_4A3035A9993C000C_METHOD_1_CA373AA1C7054598_OFFSET))(this);
	}

	::System::Boolean Method_1_F0088C88851A7DFB()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_4A3035A9993C000C_METHOD_1_F0088C88851A7DFB_OFFSET))(this);
	}
};
