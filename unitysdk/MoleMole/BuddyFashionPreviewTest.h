#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/AssetPath.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Transform; }

#define MOLEMOLE_BUDDYFASHIONPREVIEWTEST_CREATEBUDDYPARTSASYNC_OFFSET UNITYSDK_OFFSET(0xE2A57A0)
#define MOLEMOLE_BUDDYFASHIONPREVIEWTEST_METHOD_5_28C834B59E1D0120_OFFSET UNITYSDK_OFFSET(0xE2A6030)
#define MOLEMOLE_BUDDYFASHIONPREVIEWTEST_METHOD_5_BF6E5505691D3871_OFFSET UNITYSDK_OFFSET(0xE2A5BA0)
#define MOLEMOLE_BUDDYFASHIONPREVIEWTEST_PREVIEWFASHION_OFFSET UNITYSDK_OFFSET(0xE2A5560)
#define MOLEMOLE_BUDDYFASHIONPREVIEWTEST__CTOR_OFFSET UNITYSDK_OFFSET(0xE2A5A50)

namespace MoleMole
{
	inline static constexpr unsigned int BuddyFashionPreviewTest_TypeDefinitionIndex = 38842;

	class BuddyFashionPreviewTest : public ::UnityEngine::MonoBehaviour
	{
	public:
		::System::Collections::Generic::List_1<::System::String*>* partPaths; // 0x18
		::System::Collections::Generic::List_1<::UnityEngine::GameObject*>* parts; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_BUDDYFASHIONPREVIEWTEST__CTOR_OFFSET))(this);
		}

		::System::Void PreviewFashion()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_BUDDYFASHIONPREVIEWTEST_PREVIEWFASHION_OFFSET))(this);
		}

		::System::Void CreateBuddyPartsAsync(::System::Collections::Generic::List_1<::Foundation::AssetPath>* a1, ::UnityEngine::Transform* a2, ::System::Action_1<::System::Collections::Generic::Dictionary_2<::Foundation::AssetPath, ::UnityEngine::GameObject*>*>* a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::Foundation::AssetPath>*, ::UnityEngine::Transform*, ::System::Action_1<::System::Collections::Generic::Dictionary_2<::Foundation::AssetPath, ::UnityEngine::GameObject*>*>*))((::PBYTE)hIl2Cpp + MOLEMOLE_BUDDYFASHIONPREVIEWTEST_CREATEBUDDYPARTSASYNC_OFFSET))(this, a1, a2, a3);
		}

		::System::Void Method_5_BF6E5505691D3871(::System::Collections::Generic::Dictionary_2<::Foundation::AssetPath, ::UnityEngine::GameObject*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::Dictionary_2<::Foundation::AssetPath, ::UnityEngine::GameObject*>*))((::PBYTE)hIl2Cpp + MOLEMOLE_BUDDYFASHIONPREVIEWTEST_METHOD_5_BF6E5505691D3871_OFFSET))(this, a1);
		}

		::System::Void Method_5_28C834B59E1D0120()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_BUDDYFASHIONPREVIEWTEST_METHOD_5_28C834B59E1D0120_OFFSET))(this);
		}
	};
}
