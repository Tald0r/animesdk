#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/AssetRequestHandle.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/LayerMask.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_1_F3A9F1BD884780F6;
namespace System { class String; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Object; }
namespace UnityEngine { class Transform; }

#define CLASS_1_6A348FE6C41CBDE0_METHOD_1_3C1F3D715AE95FB2_OFFSET UNITYSDK_OFFSET(0xCBBF6F0)
#define CLASS_1_6A348FE6C41CBDE0_METHOD_1_74067BAEDA820FD3_OFFSET UNITYSDK_OFFSET(0xCBBF5B0)
#define CLASS_1_6A348FE6C41CBDE0_METHOD_1_8CA88D55ECEFAD59_OFFSET UNITYSDK_OFFSET(0xCBBFBB0)
#define CLASS_1_6A348FE6C41CBDE0_METHOD_1_A29349AFA1B1179C_OFFSET UNITYSDK_OFFSET(0xCBBF5C0)
#define CLASS_1_6A348FE6C41CBDE0_METHOD_1_AC8A0D0642E6FB6C_OFFSET UNITYSDK_OFFSET(0xCBBF910)
#define CLASS_1_6A348FE6C41CBDE0_METHOD_1_DDA8A2337932DF10_OFFSET UNITYSDK_OFFSET(0xCBBF930)
#define CLASS_1_6A348FE6C41CBDE0__CTOR_OFFSET UNITYSDK_OFFSET(0xCBBF550)

inline static constexpr unsigned int Class_1_6A348FE6C41CBDE0_TypeDefinitionIndex = 50925;

class Class_1_6A348FE6C41CBDE0 : public ::System::Object
{
public:
	::Foundation::AssetRequestHandle Field_1_1; // 0x10
	::System::String* Field_1_0; // 0x30
	::UnityEngine::Transform* Field_1_3; // 0x38
	::Class_1_F3A9F1BD884780F6* Field_1_2; // 0x40
	::UnityEngine::Vector3 Field_1_4; // 0x48
	::UnityEngine::Quaternion Field_1_5; // 0x54
	::UnityEngine::LayerMask Field_1_6; // 0x64

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_6A348FE6C41CBDE0__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_74067BAEDA820FD3(::Foundation::AssetRequestHandle a1)
	{
		return ((::System::Void(*)(::PVOID, ::Foundation::AssetRequestHandle))((::PBYTE)hIl2Cpp + CLASS_1_6A348FE6C41CBDE0_METHOD_1_74067BAEDA820FD3_OFFSET))(this, a1);
	}

	::System::Void Method_1_A29349AFA1B1179C(::UnityEngine::GameObject* a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + CLASS_1_6A348FE6C41CBDE0_METHOD_1_A29349AFA1B1179C_OFFSET))(this, a1);
	}

	::System::Void Method_1_3C1F3D715AE95FB2(::UnityEngine::Object* a1, ::Foundation::AssetRequestHandle a2)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Object*, ::Foundation::AssetRequestHandle))((::PBYTE)hIl2Cpp + CLASS_1_6A348FE6C41CBDE0_METHOD_1_3C1F3D715AE95FB2_OFFSET))(this, a1, a2);
	}

	::Foundation::AssetRequestHandle Method_1_AC8A0D0642E6FB6C()
	{
		return ((::Foundation::AssetRequestHandle(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_6A348FE6C41CBDE0_METHOD_1_AC8A0D0642E6FB6C_OFFSET))(this);
	}

	::System::Void Method_1_DDA8A2337932DF10()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_6A348FE6C41CBDE0_METHOD_1_DDA8A2337932DF10_OFFSET))(this);
	}

	::System::Void Method_1_8CA88D55ECEFAD59()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_6A348FE6C41CBDE0_METHOD_1_8CA88D55ECEFAD59_OFFSET))(this);
	}
};
