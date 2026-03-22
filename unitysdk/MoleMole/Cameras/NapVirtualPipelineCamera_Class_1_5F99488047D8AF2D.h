#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/LayerMask.h"
#include "unitysdk/UnityEngine/RaycastHit.h"

namespace System { class String; }

#define MOLEMOLE_CAMERAS_NAPVIRTUALPIPELINECAMERA_CLASS_1_5F99488047D8AF2D_METHOD_1_E0BF11BD80E300E7_OFFSET UNITYSDK_OFFSET(0x96EB490)
#define MOLEMOLE_CAMERAS_NAPVIRTUALPIPELINECAMERA_CLASS_1_5F99488047D8AF2D__CTOR_OFFSET UNITYSDK_OFFSET(0x96EA330)

namespace MoleMole::Cameras
{
	inline static constexpr unsigned int NapVirtualPipelineCamera_Class_1_5F99488047D8AF2D_TypeDefinitionIndex = 66555;

	class NapVirtualPipelineCamera_Class_1_5F99488047D8AF2D : public ::System::Object
	{
	public:
		::Il2CppArray<::System::String*>* Field_1_2; // 0x10
		::System::String* Field_1_0; // 0x18
		::Il2CppArray<::System::String*>* Field_1_1; // 0x20
		::UnityEngine::LayerMask Field_1_3; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CAMERAS_NAPVIRTUALPIPELINECAMERA_CLASS_1_5F99488047D8AF2D__CTOR_OFFSET))(this);
		}

		::System::Boolean Method_1_E0BF11BD80E300E7(::UnityEngine::RaycastHit a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::RaycastHit))((::PBYTE)hIl2Cpp + MOLEMOLE_CAMERAS_NAPVIRTUALPIPELINECAMERA_CLASS_1_5F99488047D8AF2D_METHOD_1_E0BF11BD80E300E7_OFFSET))(this, a1);
		}
	};
}
