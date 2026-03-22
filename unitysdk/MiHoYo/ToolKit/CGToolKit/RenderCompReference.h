#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MiHoYo::ToolKit::CGToolKit { class DoubleString; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Renderer; }

#define MIHOYO_TOOLKIT_CGTOOLKIT_RENDERCOMPREFERENCE_GETRENDERCOMPREFERENCES_OFFSET UNITYSDK_OFFSET(0x67163E0)
#define MIHOYO_TOOLKIT_CGTOOLKIT_RENDERCOMPREFERENCE_SETMATERIALREFERENCE_OFFSET UNITYSDK_OFFSET(0x67167F0)
#define MIHOYO_TOOLKIT_CGTOOLKIT_RENDERCOMPREFERENCE_SETRENDERCOMPREFERENCE_OFFSET UNITYSDK_OFFSET(0x6716440)
#define MIHOYO_TOOLKIT_CGTOOLKIT_RENDERCOMPREFERENCE__CTOR_OFFSET UNITYSDK_OFFSET(0x67162B0)

namespace MiHoYo::ToolKit::CGToolKit
{
	inline static constexpr unsigned int RenderCompReference_TypeDefinitionIndex = 36392;

	class RenderCompReference : public ::System::Object
	{
	public:
		::UnityEngine::Renderer* Key; // 0x10
		::System::Collections::Generic::List_1<::System::String*>* Values; // 0x18
		::System::Collections::Generic::List_1<::MiHoYo::ToolKit::CGToolKit::DoubleString*>* TupleValues; // 0x20

		::System::Void _ctor(::UnityEngine::Renderer* comp)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Renderer*))((::PBYTE)hIl2Cpp + MIHOYO_TOOLKIT_CGTOOLKIT_RENDERCOMPREFERENCE__CTOR_OFFSET))(this, comp);
		}

		::System::Void GetRenderCompReferences()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_TOOLKIT_CGTOOLKIT_RENDERCOMPREFERENCE_GETRENDERCOMPREFERENCES_OFFSET))(this);
		}

		::System::Void SetRenderCompReference()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_TOOLKIT_CGTOOLKIT_RENDERCOMPREFERENCE_SETRENDERCOMPREFERENCE_OFFSET))(this);
		}

		::System::Void SetMaterialReference()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_TOOLKIT_CGTOOLKIT_RENDERCOMPREFERENCE_SETMATERIALREFERENCE_OFFSET))(this);
		}
	};
}
