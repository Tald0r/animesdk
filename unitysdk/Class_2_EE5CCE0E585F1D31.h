#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_F57C3EEEB03201AF.h"
#include "unitysdk/UnityEngine/Vector2.h"

namespace UnityEngine { class RectTransform; }
namespace UnityEngine::EventSystems { class PointerEventData; }
template <typename T> class Class_2_000597E145D7A42A;

#define CLASS_2_EE5CCE0E585F1D31_METHOD_2_004D5A9C26512E4C_1_OFFSET UNITYSDK_OFFSET(0x95CF620)
#define CLASS_2_EE5CCE0E585F1D31_METHOD_2_004D5A9C26512E4C_2_OFFSET UNITYSDK_OFFSET(0x95CFD80)
#define CLASS_2_EE5CCE0E585F1D31_METHOD_2_004D5A9C26512E4C_OFFSET UNITYSDK_OFFSET(0x95CF4D0)
#define CLASS_2_EE5CCE0E585F1D31_METHOD_2_26851B7740A8223E_OFFSET UNITYSDK_OFFSET(0x95CFB60)
#define CLASS_2_EE5CCE0E585F1D31_METHOD_2_31B6F37D94BF416F_OFFSET UNITYSDK_OFFSET(0x95CF990)
#define CLASS_2_EE5CCE0E585F1D31_METHOD_2_37493865ED77F3A5_1_OFFSET UNITYSDK_OFFSET(0x95CF5D0)
#define CLASS_2_EE5CCE0E585F1D31_METHOD_2_37493865ED77F3A5_2_OFFSET UNITYSDK_OFFSET(0x95CF600)
#define CLASS_2_EE5CCE0E585F1D31_METHOD_2_37493865ED77F3A5_OFFSET UNITYSDK_OFFSET(0x95CF4F0)
#define CLASS_2_EE5CCE0E585F1D31_METHOD_2_39D8DBBF1FD78AFB_1_OFFSET UNITYSDK_OFFSET(0x95CFD70)
#define CLASS_2_EE5CCE0E585F1D31_METHOD_2_39D8DBBF1FD78AFB_OFFSET UNITYSDK_OFFSET(0x95CF4E0)
#define CLASS_2_EE5CCE0E585F1D31_METHOD_2_4A9BD1EB45E99E66_1_OFFSET UNITYSDK_OFFSET(0x95CFB50)
#define CLASS_2_EE5CCE0E585F1D31_METHOD_2_4A9BD1EB45E99E66_OFFSET UNITYSDK_OFFSET(0x95CF610)
#define CLASS_2_EE5CCE0E585F1D31_METHOD_2_6EF4D5E75AE96DC5_OFFSET UNITYSDK_OFFSET(0x95CF500)
#define CLASS_2_EE5CCE0E585F1D31_METHOD_2_C187F11607643D3C_OFFSET UNITYSDK_OFFSET(0x95CF2E0)
#define CLASS_2_EE5CCE0E585F1D31_METHOD_2_D0B5D8B6C5D071FF_1_OFFSET UNITYSDK_OFFSET(0x95CF630)
#define CLASS_2_EE5CCE0E585F1D31_METHOD_2_D0B5D8B6C5D071FF_OFFSET UNITYSDK_OFFSET(0x95CEA90)
#define CLASS_2_EE5CCE0E585F1D31_METHOD_2_D742C29ACF52643C_OFFSET UNITYSDK_OFFSET(0x95CFD90)
#define CLASS_2_EE5CCE0E585F1D31_METHOD_2_E93AF5925CE09D93_OFFSET UNITYSDK_OFFSET(0x95CF5F0)
#define CLASS_2_EE5CCE0E585F1D31_METHOD_2_EE328995A74C4B7C_OFFSET UNITYSDK_OFFSET(0x95CF230)
#define CLASS_2_EE5CCE0E585F1D31_METHOD_2_F0931B984BDF9FEC_OFFSET UNITYSDK_OFFSET(0x95CF5E0)
#define CLASS_2_EE5CCE0E585F1D31_ONCREATEPROPERTY_OFFSET UNITYSDK_OFFSET(0x95CE8E0)
#define CLASS_2_EE5CCE0E585F1D31__CTOR_OFFSET UNITYSDK_OFFSET(0x95CE700)

inline static constexpr unsigned int Class_2_EE5CCE0E585F1D31_TypeDefinitionIndex = 43682;

class Class_2_EE5CCE0E585F1D31 : public ::Class_1_F57C3EEEB03201AF
{
public:
	::Class_2_000597E145D7A42A<::System::Int32>* Field_2_5; // 0x60
	::Class_2_000597E145D7A42A<::UnityEngine::Vector2>* Field_2_2; // 0x68
	::Class_2_000597E145D7A42A<::System::Int32>* Field_2_0; // 0x70
	::Class_2_000597E145D7A42A<::System::Single>* Field_2_3; // 0x78
	::Class_2_000597E145D7A42A<::System::Int32>* Field_2_1; // 0x80
	::Class_2_000597E145D7A42A<::System::Single>* Field_2_4; // 0x88
	::UnityEngine::Vector2 Field_2_9; // 0x90
	::System::Single Field_2_7; // 0x98
	::UnityEngine::Vector2 Field_2_6; // 0x9C
	::System::Single Field_2_8; // 0xA4

	::System::Void _ctor(::System::Int32 a1, ::System::Int32 a2, ::UnityEngine::Vector2 a3, ::System::Single a4, ::System::Single a5, ::System::Int32 a6)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32, ::UnityEngine::Vector2, ::System::Single, ::System::Single, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_EE5CCE0E585F1D31__CTOR_OFFSET))(this, a1, a2, a3, a4, a5, a6);
	}

	::System::Void OnCreateProperty()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_EE5CCE0E585F1D31_ONCREATEPROPERTY_OFFSET))(this);
	}

	::System::Void Method_2_D0B5D8B6C5D071FF(::UnityEngine::RectTransform* a1, ::UnityEngine::EventSystems::PointerEventData* a2)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::RectTransform*, ::UnityEngine::EventSystems::PointerEventData*))((::PBYTE)hIl2Cpp + CLASS_2_EE5CCE0E585F1D31_METHOD_2_D0B5D8B6C5D071FF_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_EE328995A74C4B7C(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_EE5CCE0E585F1D31_METHOD_2_EE328995A74C4B7C_OFFSET))(this, a1);
	}

	::System::Void Method_2_004D5A9C26512E4C(::Class_2_000597E145D7A42A<::System::Int32>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_000597E145D7A42A<::System::Int32>*))((::PBYTE)hIl2Cpp + CLASS_2_EE5CCE0E585F1D31_METHOD_2_004D5A9C26512E4C_OFFSET))(this, a1);
	}

	::System::Void Method_2_39D8DBBF1FD78AFB(::Class_2_000597E145D7A42A<::System::Single>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_000597E145D7A42A<::System::Single>*))((::PBYTE)hIl2Cpp + CLASS_2_EE5CCE0E585F1D31_METHOD_2_39D8DBBF1FD78AFB_OFFSET))(this, a1);
	}

	::Class_2_000597E145D7A42A<::System::Int32>* Method_2_37493865ED77F3A5()
	{
		return ((::Class_2_000597E145D7A42A<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_EE5CCE0E585F1D31_METHOD_2_37493865ED77F3A5_OFFSET))(this);
	}

	::System::Void Method_2_6EF4D5E75AE96DC5(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_EE5CCE0E585F1D31_METHOD_2_6EF4D5E75AE96DC5_OFFSET))(this, a1);
	}

	::Class_2_000597E145D7A42A<::System::Int32>* Method_2_37493865ED77F3A5_1()
	{
		return ((::Class_2_000597E145D7A42A<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_EE5CCE0E585F1D31_METHOD_2_37493865ED77F3A5_1_OFFSET))(this);
	}

	::Class_2_000597E145D7A42A<::UnityEngine::Vector2>* Method_2_F0931B984BDF9FEC()
	{
		return ((::Class_2_000597E145D7A42A<::UnityEngine::Vector2>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_EE5CCE0E585F1D31_METHOD_2_F0931B984BDF9FEC_OFFSET))(this);
	}

	::System::Void Method_2_E93AF5925CE09D93(::Class_2_000597E145D7A42A<::UnityEngine::Vector2>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_000597E145D7A42A<::UnityEngine::Vector2>*))((::PBYTE)hIl2Cpp + CLASS_2_EE5CCE0E585F1D31_METHOD_2_E93AF5925CE09D93_OFFSET))(this, a1);
	}

	::Class_2_000597E145D7A42A<::System::Int32>* Method_2_37493865ED77F3A5_2()
	{
		return ((::Class_2_000597E145D7A42A<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_EE5CCE0E585F1D31_METHOD_2_37493865ED77F3A5_2_OFFSET))(this);
	}

	::System::Void Method_2_C187F11607643D3C(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_EE5CCE0E585F1D31_METHOD_2_C187F11607643D3C_OFFSET))(this, a1);
	}

	::Class_2_000597E145D7A42A<::System::Single>* Method_2_4A9BD1EB45E99E66()
	{
		return ((::Class_2_000597E145D7A42A<::System::Single>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_EE5CCE0E585F1D31_METHOD_2_4A9BD1EB45E99E66_OFFSET))(this);
	}

	::System::Void Method_2_004D5A9C26512E4C_1(::Class_2_000597E145D7A42A<::System::Int32>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_000597E145D7A42A<::System::Int32>*))((::PBYTE)hIl2Cpp + CLASS_2_EE5CCE0E585F1D31_METHOD_2_004D5A9C26512E4C_1_OFFSET))(this, a1);
	}

	::System::Void Method_2_D0B5D8B6C5D071FF_1(::UnityEngine::RectTransform* a1, ::UnityEngine::EventSystems::PointerEventData* a2)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::RectTransform*, ::UnityEngine::EventSystems::PointerEventData*))((::PBYTE)hIl2Cpp + CLASS_2_EE5CCE0E585F1D31_METHOD_2_D0B5D8B6C5D071FF_1_OFFSET))(this, a1, a2);
	}

	::Class_2_000597E145D7A42A<::System::Single>* Method_2_4A9BD1EB45E99E66_1()
	{
		return ((::Class_2_000597E145D7A42A<::System::Single>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_EE5CCE0E585F1D31_METHOD_2_4A9BD1EB45E99E66_1_OFFSET))(this);
	}

	::System::Void Method_2_26851B7740A8223E(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_EE5CCE0E585F1D31_METHOD_2_26851B7740A8223E_OFFSET))(this, a1);
	}

	::System::Void Method_2_39D8DBBF1FD78AFB_1(::Class_2_000597E145D7A42A<::System::Single>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_000597E145D7A42A<::System::Single>*))((::PBYTE)hIl2Cpp + CLASS_2_EE5CCE0E585F1D31_METHOD_2_39D8DBBF1FD78AFB_1_OFFSET))(this, a1);
	}

	::System::Void Method_2_004D5A9C26512E4C_2(::Class_2_000597E145D7A42A<::System::Int32>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_000597E145D7A42A<::System::Int32>*))((::PBYTE)hIl2Cpp + CLASS_2_EE5CCE0E585F1D31_METHOD_2_004D5A9C26512E4C_2_OFFSET))(this, a1);
	}

	::System::Void Method_2_D742C29ACF52643C(::UnityEngine::RectTransform* a1, ::UnityEngine::Vector2 a2)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::RectTransform*, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + CLASS_2_EE5CCE0E585F1D31_METHOD_2_D742C29ACF52643C_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_31B6F37D94BF416F(::UnityEngine::RectTransform* a1, ::UnityEngine::Vector2 a2)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::RectTransform*, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + CLASS_2_EE5CCE0E585F1D31_METHOD_2_31B6F37D94BF416F_OFFSET))(this, a1, a2);
	}
};
