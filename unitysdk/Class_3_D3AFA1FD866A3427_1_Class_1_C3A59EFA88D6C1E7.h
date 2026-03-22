#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/AssetRequestHandle.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Object; }

#define CLASS_3_D3AFA1FD866A3427_1_CLASS_1_C3A59EFA88D6C1E7_METHOD_1_30C4A9EA384065FB_OFFSET UNITYSDK_OFFSET(0x75D3510)
#define CLASS_3_D3AFA1FD866A3427_1_CLASS_1_C3A59EFA88D6C1E7_METHOD_1_ACF3BE081A07761B_OFFSET UNITYSDK_OFFSET(0x75D37B0)
#define CLASS_3_D3AFA1FD866A3427_1_CLASS_1_C3A59EFA88D6C1E7__CTOR_OFFSET UNITYSDK_OFFSET(0x75D3500)

inline static constexpr unsigned int Class_3_D3AFA1FD866A3427_1_Class_1_C3A59EFA88D6C1E7_TypeDefinitionIndex = 59419;

class Class_3_D3AFA1FD866A3427_1_Class_1_C3A59EFA88D6C1E7 : public ::System::Object
{
public:
	::UnityEngine::GameObject* Field_1_9; // 0x10
	::System::Single Field_1_2; // 0x18
	::System::Boolean Field_1_5; // 0x1C
	::System::Boolean Field_1_6; // 0x1D
	::System::Boolean Field_1_8; // 0x1E
	::System::Boolean Field_1_7; // 0x1F
	::System::Int32 Field_1_3; // 0x20
	::UnityEngine::Vector3 Field_1_1; // 0x24
	::System::Int32 Field_1_4; // 0x30
	::System::Int32 Field_1_0; // 0x34

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_D3AFA1FD866A3427_1_CLASS_1_C3A59EFA88D6C1E7__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_30C4A9EA384065FB(::UnityEngine::GameObject* a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + CLASS_3_D3AFA1FD866A3427_1_CLASS_1_C3A59EFA88D6C1E7_METHOD_1_30C4A9EA384065FB_OFFSET))(this, a1);
	}

	::System::Void Method_1_ACF3BE081A07761B(::UnityEngine::Object* a1, ::Foundation::AssetRequestHandle a2)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Object*, ::Foundation::AssetRequestHandle))((::PBYTE)hIl2Cpp + CLASS_3_D3AFA1FD866A3427_1_CLASS_1_C3A59EFA88D6C1E7_METHOD_1_ACF3BE081A07761B_OFFSET))(this, a1, a2);
	}
};
