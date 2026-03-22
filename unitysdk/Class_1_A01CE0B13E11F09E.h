#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Transform; }

#define CLASS_1_A01CE0B13E11F09E_CLEAN_OFFSET UNITYSDK_OFFSET(0x1385FC30)
#define CLASS_1_A01CE0B13E11F09E_METHOD_1_23B7C160CB6CEA95_OFFSET UNITYSDK_OFFSET(0x13860030)
#define CLASS_1_A01CE0B13E11F09E_METHOD_1_39C610783335FB8A_OFFSET UNITYSDK_OFFSET(0x1385FCA0)
#define CLASS_1_A01CE0B13E11F09E_METHOD_1_4D10873DB5CC58E4_OFFSET UNITYSDK_OFFSET(0x138600C0)
#define CLASS_1_A01CE0B13E11F09E_METHOD_1_4D71BCFB74C16073_OFFSET UNITYSDK_OFFSET(0x138600A0)
#define CLASS_1_A01CE0B13E11F09E_METHOD_1_9CA5A80F6B5B9E01_OFFSET UNITYSDK_OFFSET(0x138600B0)
#define CLASS_1_A01CE0B13E11F09E_METHOD_1_9F8EF6EE79B16064_OFFSET UNITYSDK_OFFSET(0x1385FB30)
#define CLASS_1_A01CE0B13E11F09E_METHOD_1_BFB8A9EC107A5B24_OFFSET UNITYSDK_OFFSET(0x13860020)
#define CLASS_1_A01CE0B13E11F09E_METHOD_1_F39234F2606D8D97_OFFSET UNITYSDK_OFFSET(0x138600D0)
#define CLASS_1_A01CE0B13E11F09E_METHOD_1_F6EB917C5A67C7BA_OFFSET UNITYSDK_OFFSET(0x1385FBC0)
#define CLASS_1_A01CE0B13E11F09E__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1385FBB0)
#define CLASS_1_A01CE0B13E11F09E__CTOR_OFFSET UNITYSDK_OFFSET(0x1385FAB0)

inline static constexpr unsigned int Class_1_A01CE0B13E11F09E_TypeDefinitionIndex = 78954;

class Class_1_A01CE0B13E11F09E : public ::System::Object
{
public:
	::UnityEngine::GameObject* Field_1_0; // 0x10
	::UnityEngine::Transform* Field_1_1; // 0x18

	::System::Void _ctor(::UnityEngine::GameObject* a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + CLASS_1_A01CE0B13E11F09E__CTOR_OFFSET))(this, a1);
	}

	::System::Void _ctor_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A01CE0B13E11F09E__CTOR_1_OFFSET))(this);
	}

	::System::Void Method_1_F6EB917C5A67C7BA(::System::Boolean a1, ::System::Boolean a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_A01CE0B13E11F09E_METHOD_1_F6EB917C5A67C7BA_OFFSET))(this, a1, a2);
	}

	::System::Void Clean()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A01CE0B13E11F09E_CLEAN_OFFSET))(this);
	}

	::System::Void Method_1_39C610783335FB8A(::System::Boolean a1, ::System::Boolean a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_A01CE0B13E11F09E_METHOD_1_39C610783335FB8A_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_BFB8A9EC107A5B24(::UnityEngine::Transform* a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + CLASS_1_A01CE0B13E11F09E_METHOD_1_BFB8A9EC107A5B24_OFFSET))(this, a1);
	}

	::System::Void Method_1_23B7C160CB6CEA95(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_A01CE0B13E11F09E_METHOD_1_23B7C160CB6CEA95_OFFSET))(this, a1);
	}

	::UnityEngine::Transform* Method_1_4D71BCFB74C16073()
	{
		return ((::UnityEngine::Transform*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A01CE0B13E11F09E_METHOD_1_4D71BCFB74C16073_OFFSET))(this);
	}

	::UnityEngine::GameObject* Method_1_9CA5A80F6B5B9E01()
	{
		return ((::UnityEngine::GameObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A01CE0B13E11F09E_METHOD_1_9CA5A80F6B5B9E01_OFFSET))(this);
	}

	::System::Void Method_1_4D10873DB5CC58E4(::UnityEngine::GameObject* a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + CLASS_1_A01CE0B13E11F09E_METHOD_1_4D10873DB5CC58E4_OFFSET))(this, a1);
	}

	::System::Void Method_1_9F8EF6EE79B16064(::UnityEngine::GameObject* a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + CLASS_1_A01CE0B13E11F09E_METHOD_1_9F8EF6EE79B16064_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_F39234F2606D8D97()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A01CE0B13E11F09E_METHOD_1_F39234F2606D8D97_OFFSET))(this);
	}
};
