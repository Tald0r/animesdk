#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/UI/Image.h"

namespace MoleMole { class ImageSmoothMask; }
namespace UnityEngine::UI { class VertexHelper; }

#define MOLEMOLE_IMAGEFORSMOOTHMASK_ONDESTROY_OFFSET UNITYSDK_OFFSET(0x75A3CA0)
#define MOLEMOLE_IMAGEFORSMOOTHMASK_ONENABLE_OFFSET UNITYSDK_OFFSET(0x75A3910)
#define MOLEMOLE_IMAGEFORSMOOTHMASK_ONPOPULATEMESH_OFFSET UNITYSDK_OFFSET(0x75A3A20)
#define MOLEMOLE_IMAGEFORSMOOTHMASK__CTOR_OFFSET UNITYSDK_OFFSET(0x75A3D10)
#define MOLEMOLE_IMAGEFORSMOOTHMASK___BASE_ONDESTROY_OFFSET UNITYSDK_OFFSET(0x75A3D80)
#define MOLEMOLE_IMAGEFORSMOOTHMASK___BASE_ONENABLE_OFFSET UNITYSDK_OFFSET(0x75A3D90)
#define MOLEMOLE_IMAGEFORSMOOTHMASK___BASE_ONPOPULATEMESH_OFFSET UNITYSDK_OFFSET(0x75A3E30)

namespace MoleMole
{
	inline static constexpr unsigned int ImageForSmoothMask_TypeDefinitionIndex = 58367;

	class ImageForSmoothMask : public ::UnityEngine::UI::Image
	{
	public:
		::MoleMole::ImageSmoothMask* Field_9_0; // 0x140

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_IMAGEFORSMOOTHMASK__CTOR_OFFSET))(this);
		}

		::System::Void OnEnable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_IMAGEFORSMOOTHMASK_ONENABLE_OFFSET))(this);
		}

		::System::Void OnPopulateMesh(::UnityEngine::UI::VertexHelper* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::UI::VertexHelper*))((::PBYTE)hIl2Cpp + MOLEMOLE_IMAGEFORSMOOTHMASK_ONPOPULATEMESH_OFFSET))(this, a1);
		}

		::System::Void OnDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_IMAGEFORSMOOTHMASK_ONDESTROY_OFFSET))(this);
		}

		::System::Void __base_OnDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_IMAGEFORSMOOTHMASK___BASE_ONDESTROY_OFFSET))(this);
		}

		::System::Void __base_OnEnable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_IMAGEFORSMOOTHMASK___BASE_ONENABLE_OFFSET))(this);
		}

		::System::Void __base_OnPopulateMesh(::UnityEngine::UI::VertexHelper* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::UI::VertexHelper*))((::PBYTE)hIl2Cpp + MOLEMOLE_IMAGEFORSMOOTHMASK___BASE_ONPOPULATEMESH_OFFSET))(this, a1);
		}
	};
}
