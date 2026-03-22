#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/MDBClothToRenderersMapping_Struct_2_5D4D097EFCB9C87F_2.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

class Class_1_320D01457FBD007D;
namespace MoleMole { class ClothToRenderersDataDic; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class MdbComponent; }

#define MOLEMOLE_MDBCLOTHTORENDERERSMAPPING_CACHEVISIBILITYCHANGEANDCALCULATE_OFFSET UNITYSDK_OFFSET(0xC2D8E40)
#define MOLEMOLE_MDBCLOTHTORENDERERSMAPPING_CACHE_OFFSET UNITYSDK_OFFSET(0xC2D8560)
#define MOLEMOLE_MDBCLOTHTORENDERERSMAPPING_GET_MDBCOMPONENT_OFFSET UNITYSDK_OFFSET(0xC2D83F0)
#define MOLEMOLE_MDBCLOTHTORENDERERSMAPPING__CTOR_OFFSET UNITYSDK_OFFSET(0xC2D9370)

namespace MoleMole
{
	inline static constexpr unsigned int MDBClothToRenderersMapping_TypeDefinitionIndex = 70767;

	class MDBClothToRenderersMapping : public ::UnityEngine::MonoBehaviour
	{
	public:
		::UnityEngine::MdbComponent* Field_5_0; // 0x18
		::System::Collections::Generic::Dictionary_2<::System::Int32, ::Class_1_320D01457FBD007D*>* MdbClothIndexToRenderersState; // 0x20
		::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Collections::Generic::HashSet_1<::System::Int32>*>* RendererInstanceIDToClothIndices; // 0x28
		::MoleMole::ClothToRenderersDataDic* Data; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MDBCLOTHTORENDERERSMAPPING__CTOR_OFFSET))(this);
		}

		::UnityEngine::MdbComponent* get_MdbComponent()
		{
			return ((::UnityEngine::MdbComponent*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MDBCLOTHTORENDERERSMAPPING_GET_MDBCOMPONENT_OFFSET))(this);
		}

		::System::Void Cache()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MDBCLOTHTORENDERERSMAPPING_CACHE_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::MoleMole::MDBClothToRenderersMapping_Struct_2_5D4D097EFCB9C87F_2>* CacheVisibilityChangeAndCalculate(::System::Int32 a1, ::System::Boolean a2, ::System::Boolean a3)
		{
			return ((::System::Collections::Generic::List_1<::MoleMole::MDBClothToRenderersMapping_Struct_2_5D4D097EFCB9C87F_2>*(*)(::PVOID, ::System::Int32, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_MDBCLOTHTORENDERERSMAPPING_CACHEVISIBILITYCHANGEANDCALCULATE_OFFSET))(this, a1, a2, a3);
		}
	};
}
