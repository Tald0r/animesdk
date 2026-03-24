#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Battle/ChallengeSubTypeItem.h"

class Class_1_B7E341C5F1A6F199;
class Class_2_208CC9941471731A_776;
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_BATTLE_CHALLENGESUBTYPEEXPLORECOLLECT_GETCURRENTCOUNT_OFFSET UNITYSDK_OFFSET(0x9166DC0)
#define MOLEMOLE_BATTLE_CHALLENGESUBTYPEEXPLORECOLLECT_GETPROGRESSSTRING_OFFSET UNITYSDK_OFFSET(0x9166EA0)
#define MOLEMOLE_BATTLE_CHALLENGESUBTYPEEXPLORECOLLECT_GETPROGRESS_OFFSET UNITYSDK_OFFSET(0x9166E20)
#define MOLEMOLE_BATTLE_CHALLENGESUBTYPEEXPLORECOLLECT_GET_ISSUCCESS_OFFSET UNITYSDK_OFFSET(0x9166D50)
#define MOLEMOLE_BATTLE_CHALLENGESUBTYPEEXPLORECOLLECT_ONEVENTFROMANYONE_OFFSET UNITYSDK_OFFSET(0x9166C40)
#define MOLEMOLE_BATTLE_CHALLENGESUBTYPEEXPLORECOLLECT__CTOR_OFFSET UNITYSDK_OFFSET(0x9166A90)
#define MOLEMOLE_BATTLE_CHALLENGESUBTYPEEXPLORECOLLECT___BASE_ONEVENTFROMANYONE_OFFSET UNITYSDK_OFFSET(0x9166FA0)

namespace MoleMole::Battle
{
	inline static constexpr unsigned int ChallengeSubTypeExploreCollect_TypeDefinitionIndex = 54626;

	class ChallengeSubTypeExploreCollect : public ::MoleMole::Battle::ChallengeSubTypeItem
	{
	public:
		::System::Collections::Generic::List_1<::System::Int32>* itemIDs; // 0x20
		::System::Int32 targetItemCount; // 0x28
		::System::Int32 collectItemCount; // 0x2C

		::System::Void _ctor(::Class_2_208CC9941471731A_776* inTemplate)
		{
			return ((::System::Void(*)(::PVOID, ::Class_2_208CC9941471731A_776*))((::PBYTE)hIl2Cpp + MOLEMOLE_BATTLE_CHALLENGESUBTYPEEXPLORECOLLECT__CTOR_OFFSET))(this, inTemplate);
		}

		::System::Void OnEventFromAnyone(::Class_1_B7E341C5F1A6F199* evt)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_B7E341C5F1A6F199*))((::PBYTE)hIl2Cpp + MOLEMOLE_BATTLE_CHALLENGESUBTYPEEXPLORECOLLECT_ONEVENTFROMANYONE_OFFSET))(this, evt);
		}

		::System::Boolean get_IsSuccess()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_BATTLE_CHALLENGESUBTYPEEXPLORECOLLECT_GET_ISSUCCESS_OFFSET))(this);
		}

		::System::Int32 GetCurrentCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_BATTLE_CHALLENGESUBTYPEEXPLORECOLLECT_GETCURRENTCOUNT_OFFSET))(this);
		}

		::System::Single GetProgress()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_BATTLE_CHALLENGESUBTYPEEXPLORECOLLECT_GETPROGRESS_OFFSET))(this);
		}

		::System::String* GetProgressString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_BATTLE_CHALLENGESUBTYPEEXPLORECOLLECT_GETPROGRESSSTRING_OFFSET))(this);
		}

		::System::Void __base_OnEventFromAnyone(::Class_1_B7E341C5F1A6F199* P0)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_B7E341C5F1A6F199*))((::PBYTE)hIl2Cpp + MOLEMOLE_BATTLE_CHALLENGESUBTYPEEXPLORECOLLECT___BASE_ONEVENTFROMANYONE_OFFSET))(this, P0);
		}
	};
}
