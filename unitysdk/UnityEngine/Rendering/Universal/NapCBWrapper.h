#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/CharacterDynamicParams.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Rendering/Universal/NapCBProperty.h"
#include "unitysdk/UnityEngine/Vector4.h"

class NapRenderer;
class VectorArrayBuffer;

#define UNITYENGINE_RENDERING_UNIVERSAL_NAPCBWRAPPER_BINDBUFFER_OFFSET UNITYSDK_OFFSET(0x1924A030)
#define UNITYENGINE_RENDERING_UNIVERSAL_NAPCBWRAPPER_BINDNAPCBUFFER_OFFSET UNITYSDK_OFFSET(0x1924A1A0)
#define UNITYENGINE_RENDERING_UNIVERSAL_NAPCBWRAPPER_DESTROY_OFFSET UNITYSDK_OFFSET(0x1924B720)
#define UNITYENGINE_RENDERING_UNIVERSAL_NAPCBWRAPPER_GET_OFFSET UNITYSDK_OFFSET(0x19249EF0)
#define UNITYENGINE_RENDERING_UNIVERSAL_NAPCBWRAPPER_INIT_OFFSET UNITYSDK_OFFSET(0x19249D10)
#define UNITYENGINE_RENDERING_UNIVERSAL_NAPCBWRAPPER_RESET_OFFSET UNITYSDK_OFFSET(0x1924B890)
#define UNITYENGINE_RENDERING_UNIVERSAL_NAPCBWRAPPER_SETDIRTY_OFFSET UNITYSDK_OFFSET(0x1924B840)
#define UNITYENGINE_RENDERING_UNIVERSAL_NAPCBWRAPPER_SETPERMATERIALBUFFER_OFFSET UNITYSDK_OFFSET(0x1924A760)
#define UNITYENGINE_RENDERING_UNIVERSAL_NAPCBWRAPPER_SET_OFFSET UNITYSDK_OFFSET(0x19249DB0)
#define UNITYENGINE_RENDERING_UNIVERSAL_NAPCBWRAPPER_SYNCTOGPUIFDIRTY_OFFSET UNITYSDK_OFFSET(0x1924A6C0)
#define UNITYENGINE_RENDERING_UNIVERSAL_NAPCBWRAPPER__CTOR_OFFSET UNITYSDK_OFFSET(0x1924B900)

namespace UnityEngine::Rendering::Universal
{
	inline static constexpr unsigned int NapCBWrapper_TypeDefinitionIndex = 28604;

	class NapCBWrapper : public ::System::Object
	{
	public:
		::VectorArrayBuffer* napCB; // 0x10
		::CharacterDynamicParams targetState; // 0x18
		::System::Boolean dirty; // 0xA8

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_NAPCBWRAPPER__CTOR_OFFSET))(this);
		}

		::System::Void Init()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_NAPCBWRAPPER_INIT_OFFSET))(this);
		}

		::System::Void Set(::UnityEngine::Rendering::Universal::NapCBProperty property, ::UnityEngine::Vector4 value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::Universal::NapCBProperty, ::UnityEngine::Vector4))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_NAPCBWRAPPER_SET_OFFSET))(this, property, value);
		}

		::UnityEngine::Vector4 Get(::UnityEngine::Rendering::Universal::NapCBProperty property)
		{
			return ((::UnityEngine::Vector4(*)(::PVOID, ::UnityEngine::Rendering::Universal::NapCBProperty))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_NAPCBWRAPPER_GET_OFFSET))(this, property);
		}

		::System::Void BindBuffer(::Il2CppArray<::NapRenderer*>* napRenderers)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::NapRenderer*>*))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_NAPCBWRAPPER_BINDBUFFER_OFFSET))(this, napRenderers);
		}

		::System::Void SyncToGPUIfDirty()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_NAPCBWRAPPER_SYNCTOGPUIFDIRTY_OFFSET))(this);
		}

		::System::Void BindNapCBuffer(::NapRenderer* napRenderer)
		{
			return ((::System::Void(*)(::PVOID, ::NapRenderer*))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_NAPCBWRAPPER_BINDNAPCBUFFER_OFFSET))(this, napRenderer);
		}

		::System::Void SetPerMaterialBuffer(::NapRenderer* napRenderer)
		{
			return ((::System::Void(*)(::PVOID, ::NapRenderer*))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_NAPCBWRAPPER_SETPERMATERIALBUFFER_OFFSET))(this, napRenderer);
		}

		::System::Void Destroy(::Il2CppArray<::NapRenderer*>* napRenderers)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::NapRenderer*>*))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_NAPCBWRAPPER_DESTROY_OFFSET))(this, napRenderers);
		}

		::System::Void SetDirty()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_NAPCBWRAPPER_SETDIRTY_OFFSET))(this);
		}

		::System::Void Reset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_NAPCBWRAPPER_RESET_OFFSET))(this);
		}
	};
}
