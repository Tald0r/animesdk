#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/AssetPath.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

class Class_1_3056A65E74601914;
class Class_1_3E2902AE141B8B89;
class Class_1_494E7B65012EFD41;
class Class_1_93499E22F6016E93;
class Class_1_DFB6744882BEF1CB;
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class RectTransform; }
namespace UnityEngine::UI { class Image; }

#define MOLEMOLE_PHOTOWALLTHEMEITEMTESTER_METHOD_5_5CDF16CC200D8B52_OFFSET UNITYSDK_OFFSET(0xA7F7020)
#define MOLEMOLE_PHOTOWALLTHEMEITEMTESTER_METHOD_5_88BB745145D1FA8F_OFFSET UNITYSDK_OFFSET(0xA7F7090)
#define MOLEMOLE_PHOTOWALLTHEMEITEMTESTER_METHOD_5_D7C065E645A7073F_OFFSET UNITYSDK_OFFSET(0xA7F72D0)
#define MOLEMOLE_PHOTOWALLTHEMEITEMTESTER_METHOD_5_DC9798F68048BBD9_OFFSET UNITYSDK_OFFSET(0xA7F7350)
#define MOLEMOLE_PHOTOWALLTHEMEITEMTESTER_RENDERDATA_OFFSET UNITYSDK_OFFSET(0xA7F6FA0)
#define MOLEMOLE_PHOTOWALLTHEMEITEMTESTER__CTOR_OFFSET UNITYSDK_OFFSET(0xA7F7000)

namespace MoleMole
{
	inline static constexpr unsigned int PhotoWallThemeItemTester_TypeDefinitionIndex = 61001;

	class PhotoWallThemeItemTester : public ::UnityEngine::MonoBehaviour
	{
	public:
		::System::String* Json; // 0x18
		::UnityEngine::RectTransform* ImageRateCompare; // 0x20
		::UnityEngine::UI::Image* WallImage; // 0x28
		::Class_1_3056A65E74601914* Field_5_3; // 0x30
		::System::Collections::Generic::Dictionary_2<::Foundation::AssetPath, ::System::Collections::Generic::List_1<::Class_1_3E2902AE141B8B89*>*>* Field_5_4; // 0x38

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_PHOTOWALLTHEMEITEMTESTER__CTOR_OFFSET))(this);
		}

		::System::Void RenderData()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_PHOTOWALLTHEMEITEMTESTER_RENDERDATA_OFFSET))(this);
		}

		::System::Void Method_5_5CDF16CC200D8B52(::Class_1_DFB6744882BEF1CB* a1, ::Class_1_93499E22F6016E93* a2)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_DFB6744882BEF1CB*, ::Class_1_93499E22F6016E93*))((::PBYTE)hIl2Cpp + MOLEMOLE_PHOTOWALLTHEMEITEMTESTER_METHOD_5_5CDF16CC200D8B52_OFFSET))(this, a1, a2);
		}

		::Class_1_3E2902AE141B8B89* Method_5_88BB745145D1FA8F(::Foundation::AssetPath a1, ::System::Int32 a2, ::Class_1_DFB6744882BEF1CB* a3, ::Class_1_93499E22F6016E93* a4)
		{
			return ((::Class_1_3E2902AE141B8B89*(*)(::PVOID, ::Foundation::AssetPath, ::System::Int32, ::Class_1_DFB6744882BEF1CB*, ::Class_1_93499E22F6016E93*))((::PBYTE)hIl2Cpp + MOLEMOLE_PHOTOWALLTHEMEITEMTESTER_METHOD_5_88BB745145D1FA8F_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void Method_5_D7C065E645A7073F(::Class_1_3056A65E74601914* a1, ::Class_1_DFB6744882BEF1CB* a2, ::Class_1_93499E22F6016E93* a3)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_3056A65E74601914*, ::Class_1_DFB6744882BEF1CB*, ::Class_1_93499E22F6016E93*))((::PBYTE)hIl2Cpp + MOLEMOLE_PHOTOWALLTHEMEITEMTESTER_METHOD_5_D7C065E645A7073F_OFFSET))(this, a1, a2, a3);
		}

		::System::Int32 Method_5_DC9798F68048BBD9(::Class_1_494E7B65012EFD41* a1, ::Class_1_494E7B65012EFD41* a2)
		{
			return ((::System::Int32(*)(::PVOID, ::Class_1_494E7B65012EFD41*, ::Class_1_494E7B65012EFD41*))((::PBYTE)hIl2Cpp + MOLEMOLE_PHOTOWALLTHEMEITEMTESTER_METHOD_5_DC9798F68048BBD9_OFFSET))(this, a1, a2);
		}
	};
}
