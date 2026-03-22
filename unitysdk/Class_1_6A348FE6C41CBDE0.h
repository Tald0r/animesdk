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

#define CLASS_1_6A348FE6C41CBDE0_METHOD_1_3C1F3D715AE95FB2_OFFSET UNITYSDK_OFFSET(0x6F2CD80)
#define CLASS_1_6A348FE6C41CBDE0_METHOD_1_74067BAEDA820FD3_OFFSET UNITYSDK_OFFSET(0x6F2D320)
#define CLASS_1_6A348FE6C41CBDE0_METHOD_1_8CA88D55ECEFAD59_OFFSET UNITYSDK_OFFSET(0x6F2D0D0)
#define CLASS_1_6A348FE6C41CBDE0_METHOD_1_A29349AFA1B1179C_OFFSET UNITYSDK_OFFSET(0x6F2CFA0)
#define CLASS_1_6A348FE6C41CBDE0_METHOD_1_AC8A0D0642E6FB6C_OFFSET UNITYSDK_OFFSET(0x6F2D330)
#define CLASS_1_6A348FE6C41CBDE0_METHOD_1_DDA8A2337932DF10_OFFSET UNITYSDK_OFFSET(0x6F2D350)
#define CLASS_1_6A348FE6C41CBDE0__CTOR_OFFSET UNITYSDK_OFFSET(0x6F2CD20)

inline static constexpr unsigned int Class_1_6A348FE6C41CBDE0_TypeDefinitionIndex = 72416;

class Class_1_6A348FE6C41CBDE0 : public ::System::Object
{
public:
	::UnityEngine::Transform* Field_1_3; // 0x10
	::Foundation::AssetRequestHandle Field_1_1; // 0x18
	::Class_1_F3A9F1BD884780F6* Field_1_2; // 0x38
	::System::String* Field_1_0; // 0x40
	::UnityEngine::Quaternion Field_1_5; // 0x48
	::UnityEngine::Vector3 Field_1_4; // 0x58
	::UnityEngine::LayerMask Field_1_6; // 0x64

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_6A348FE6C41CBDE0__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_3C1F3D715AE95FB2(::UnityEngine::Object* a1, ::Foundation::AssetRequestHandle a2)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Object*, ::Foundation::AssetRequestHandle))((::PBYTE)hIl2Cpp + CLASS_1_6A348FE6C41CBDE0_METHOD_1_3C1F3D715AE95FB2_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_A29349AFA1B1179C(::UnityEngine::GameObject* a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + CLASS_1_6A348FE6C41CBDE0_METHOD_1_A29349AFA1B1179C_OFFSET))(this, a1);
	}

	::System::Void Method_1_8CA88D55ECEFAD59()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_6A348FE6C41CBDE0_METHOD_1_8CA88D55ECEFAD59_OFFSET))(this);
	}

	::System::Void Method_1_74067BAEDA820FD3(::Foundation::AssetRequestHandle a1)
	{
		return ((::System::Void(*)(::PVOID, ::Foundation::AssetRequestHandle))((::PBYTE)hIl2Cpp + CLASS_1_6A348FE6C41CBDE0_METHOD_1_74067BAEDA820FD3_OFFSET))(this, a1);
	}

	::Foundation::AssetRequestHandle Method_1_AC8A0D0642E6FB6C()
	{
		return ((::Foundation::AssetRequestHandle(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_6A348FE6C41CBDE0_METHOD_1_AC8A0D0642E6FB6C_OFFSET))(this);
	}

	::System::Void Method_1_DDA8A2337932DF10()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_6A348FE6C41CBDE0_METHOD_1_DDA8A2337932DF10_OFFSET))(this);
	}
};
