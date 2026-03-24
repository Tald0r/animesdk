#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"

class Class_0_16E4307DCC419505_488;
class Class_1_BC9D27E6028F322B;
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T1, typename T2> class IDictionary_2; }

#define MOLEMOLE_UIMAINCITYCHATPLAYCONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0xD76EA90)

namespace MoleMole
{
	inline static constexpr unsigned int UIMainCityChatPlayContext_TypeDefinitionIndex = 76663;

	class UIMainCityChatPlayContext : public ::MoleMole::UIControllerContextBase
	{
	public:
		::Class_0_16E4307DCC419505_488* CameraHandler; // 0x28
		::System::Collections::Generic::IDictionary_2<::System::Int32, ::System::String*>* ParticipatorMap; // 0x30
		::System::Action_1<::Class_1_BC9D27E6028F322B*>* callback; // 0x38
		::System::String* replaceTextMapTD; // 0x40
		::System::Action_1<::Class_1_BC9D27E6028F322B*>* onUICloseCallback; // 0x48
		::System::Int32 id; // 0x50
		::System::Boolean ManualStart; // 0x54

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMAINCITYCHATPLAYCONTEXT__CTOR_OFFSET))(this);
		}
	};
}
