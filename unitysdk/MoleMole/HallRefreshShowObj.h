#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_205E43D40B9E7AEA.h"
#include "unitysdk/MoleMole/LogicMessageBase.h"

class Class_3_06B506F3349584D7;
class Class_3_AE02BC8285203464_32;
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_HALLREFRESHSHOWOBJ_CHANGESECTION_OFFSET UNITYSDK_OFFSET(0x9917720)
#define MOLEMOLE_HALLREFRESHSHOWOBJ_GET_PRIORITY_OFFSET UNITYSDK_OFFSET(0x9917420)
#define MOLEMOLE_HALLREFRESHSHOWOBJ_ONPROCESS_OFFSET UNITYSDK_OFFSET(0x99177A0)
#define MOLEMOLE_HALLREFRESHSHOWOBJ_SETMESSAGECONFIG_OFFSET UNITYSDK_OFFSET(0x99176B0)
#define MOLEMOLE_HALLREFRESHSHOWOBJ__CTOR_OFFSET UNITYSDK_OFFSET(0x9917430)
#define MOLEMOLE_HALLREFRESHSHOWOBJ__ONPROCESS_G__CHECKINCAMERA_7_3_OFFSET UNITYSDK_OFFSET(0x9918660)
#define MOLEMOLE_HALLREFRESHSHOWOBJ___BASE_SETMESSAGECONFIG_OFFSET UNITYSDK_OFFSET(0x99189F0)

namespace MoleMole
{
	inline static constexpr unsigned int HallRefreshShowObj_TypeDefinitionIndex = 53080;

	class HallRefreshShowObj : public ::MoleMole::LogicMessageBase
	{
	public:
		::Class_3_AE02BC8285203464_32* ntf; // 0x20
		::System::UInt32 sectionUID; // 0x28

		::System::Void _ctor(::Class_3_AE02BC8285203464_32* ntf, ::Enum_3_205E43D40B9E7AEA page)
		{
			return ((::System::Void(*)(::PVOID, ::Class_3_AE02BC8285203464_32*, ::Enum_3_205E43D40B9E7AEA))((::PBYTE)hIl2Cpp + MOLEMOLE_HALLREFRESHSHOWOBJ__CTOR_OFFSET))(this, ntf, page);
		}

		::System::Int32 get_Priority()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_HALLREFRESHSHOWOBJ_GET_PRIORITY_OFFSET))(this);
		}

		::System::Void SetMessageConfig()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_HALLREFRESHSHOWOBJ_SETMESSAGECONFIG_OFFSET))(this);
		}

		::System::Void ChangeSection(::Class_3_AE02BC8285203464_32* ntf, ::System::UInt32 sectionUID)
		{
			return ((::System::Void(*)(::PVOID, ::Class_3_AE02BC8285203464_32*, ::System::UInt32))((::PBYTE)hIl2Cpp + MOLEMOLE_HALLREFRESHSHOWOBJ_CHANGESECTION_OFFSET))(this, ntf, sectionUID);
		}

		::System::Void OnProcess()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_HALLREFRESHSHOWOBJ_ONPROCESS_OFFSET))(this);
		}

		static ::System::Boolean _OnProcess_g__CheckInCamera_7_3(::System::Collections::Generic::List_1<::Class_3_06B506F3349584D7*>* tagList)
		{
			return ((::System::Boolean(*)(::System::Collections::Generic::List_1<::Class_3_06B506F3349584D7*>*))((::PBYTE)hIl2Cpp + MOLEMOLE_HALLREFRESHSHOWOBJ__ONPROCESS_G__CHECKINCAMERA_7_3_OFFSET))(tagList);
		}

		::System::Void __base_SetMessageConfig()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_HALLREFRESHSHOWOBJ___BASE_SETMESSAGECONFIG_OFFSET))(this);
		}
	};
}
