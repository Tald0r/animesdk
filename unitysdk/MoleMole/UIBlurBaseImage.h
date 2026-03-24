#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/AssetRequestHandle.h"
#include "unitysdk/UnityEngine/UI/Image.h"

namespace System { class String; }
namespace UnityEngine { class Material; }

#define MOLEMOLE_UIBLURBASEIMAGE_METHOD_9_84D2CF41A744CC73_OFFSET UNITYSDK_OFFSET(0xACE9830)
#define MOLEMOLE_UIBLURBASEIMAGE_METHOD_9_E169D5A7FD659E00_OFFSET UNITYSDK_OFFSET(0xACE9DE0)
#define MOLEMOLE_UIBLURBASEIMAGE_ONDESTROY_OFFSET UNITYSDK_OFFSET(0xACE9550)
#define MOLEMOLE_UIBLURBASEIMAGE__CTOR_OFFSET UNITYSDK_OFFSET(0xACE97B0)
#define MOLEMOLE_UIBLURBASEIMAGE___BASE_ONDESTROY_OFFSET UNITYSDK_OFFSET(0xACE9820)

namespace MoleMole
{
	inline static constexpr unsigned int UIBlurBaseImage_TypeDefinitionIndex = 51237;

	class UIBlurBaseImage : public ::UnityEngine::UI::Image
	{
	public:
		::Foundation::AssetRequestHandle Field_9_0; // 0x140
		::UnityEngine::Material* _material; // 0x160
		::System::Boolean _NeedUnloadMat; // 0x168

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBLURBASEIMAGE__CTOR_OFFSET))(this);
		}

		::System::Void OnDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBLURBASEIMAGE_ONDESTROY_OFFSET))(this);
		}

		::System::Void __base_OnDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBLURBASEIMAGE___BASE_ONDESTROY_OFFSET))(this);
		}

		::System::Void Method_9_84D2CF41A744CC73(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBLURBASEIMAGE_METHOD_9_84D2CF41A744CC73_OFFSET))(this, a1);
		}

		::System::Void Method_9_E169D5A7FD659E00(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBLURBASEIMAGE_METHOD_9_E169D5A7FD659E00_OFFSET))(this, a1);
		}
	};
}
