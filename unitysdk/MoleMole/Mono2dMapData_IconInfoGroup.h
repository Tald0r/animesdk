#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_6A96CF8852C977C2.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class Mono2dMapData_IconInfo; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class RectTransform; }

#define MOLEMOLE_MONO2DMAPDATA_ICONINFOGROUP_METHOD_1_66CC9828DB1F478F_1_OFFSET UNITYSDK_OFFSET(0x7A8A080)
#define MOLEMOLE_MONO2DMAPDATA_ICONINFOGROUP_METHOD_1_66CC9828DB1F478F_OFFSET UNITYSDK_OFFSET(0x7A8A8E0)
#define MOLEMOLE_MONO2DMAPDATA_ICONINFOGROUP_METHOD_1_8594010D6A57C9BB_OFFSET UNITYSDK_OFFSET(0x7A89FE0)
#define MOLEMOLE_MONO2DMAPDATA_ICONINFOGROUP_METHOD_1_8D61BE16C9463302_OFFSET UNITYSDK_OFFSET(0x7A89A10)
#define MOLEMOLE_MONO2DMAPDATA_ICONINFOGROUP_METHOD_1_AE5D2F3CFBE15D74_OFFSET UNITYSDK_OFFSET(0x7A8B140)
#define MOLEMOLE_MONO2DMAPDATA_ICONINFOGROUP__CTOR_OFFSET UNITYSDK_OFFSET(0x7A89980)

namespace MoleMole
{
	inline static constexpr unsigned int Mono2dMapData_IconInfoGroup_TypeDefinitionIndex = 38112;

	class Mono2dMapData_IconInfoGroup : public ::System::Object
	{
	public:
		::UnityEngine::RectTransform* ContentRoot; // 0x10
		::System::Collections::Generic::List_1<::MoleMole::Mono2dMapData_IconInfo*>* IconInfos; // 0x18
		::System::Collections::Generic::Dictionary_2<::System::Int32, ::UnityEngine::RectTransform*>* _iconRects; // 0x20
		::Enum_3_6A96CF8852C977C2 IconType; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONO2DMAPDATA_ICONINFOGROUP__CTOR_OFFSET))(this);
		}

		::System::Void Method_1_8D61BE16C9463302()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONO2DMAPDATA_ICONINFOGROUP_METHOD_1_8D61BE16C9463302_OFFSET))(this);
		}

		::System::Void Method_1_8594010D6A57C9BB()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONO2DMAPDATA_ICONINFOGROUP_METHOD_1_8594010D6A57C9BB_OFFSET))(this);
		}

		::System::Void Method_1_66CC9828DB1F478F()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONO2DMAPDATA_ICONINFOGROUP_METHOD_1_66CC9828DB1F478F_OFFSET))(this);
		}

		::System::Void Method_1_66CC9828DB1F478F_1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONO2DMAPDATA_ICONINFOGROUP_METHOD_1_66CC9828DB1F478F_1_OFFSET))(this);
		}

		::System::Void Method_1_AE5D2F3CFBE15D74()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONO2DMAPDATA_ICONINFOGROUP_METHOD_1_AE5D2F3CFBE15D74_OFFSET))(this);
		}
	};
}
