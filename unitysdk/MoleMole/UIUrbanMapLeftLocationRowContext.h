#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/AssetPath.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"

namespace System { class Object; }
namespace System { class String; }
namespace System { template <typename T1, typename T2> class Func_2; }
namespace System { template <typename T> class Action_1; }

#define MOLEMOLE_UIURBANMAPLEFTLOCATIONROWCONTEXT_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x71DFE40)
#define MOLEMOLE_UIURBANMAPLEFTLOCATIONROWCONTEXT_EQUALS_OFFSET UNITYSDK_OFFSET(0x71DFD80)
#define MOLEMOLE_UIURBANMAPLEFTLOCATIONROWCONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x71DFFD0)
#define MOLEMOLE_UIURBANMAPLEFTLOCATIONROWCONTEXT___BASE_EQUALS_OFFSET UNITYSDK_OFFSET(0x71DFFE0)

namespace MoleMole
{
	inline static constexpr unsigned int UIUrbanMapLeftLocationRowContext_TypeDefinitionIndex = 58910;

	class UIUrbanMapLeftLocationRowContext : public ::MoleMole::UIControllerContextBase
	{
	public:
		::System::Func_2<::MoleMole::UIUrbanMapLeftLocationRowContext*, ::System::Boolean>* CurrentSelectFlag; // 0x28
		::System::Func_2<::MoleMole::UIUrbanMapLeftLocationRowContext*, ::System::Boolean>* PlayerInFlag; // 0x30
		::System::Func_2<::MoleMole::UIUrbanMapLeftLocationRowContext*, ::System::Boolean>* IsLock; // 0x38
		::System::Action_1<::MoleMole::UIUrbanMapLeftLocationRowContext*>* OnClick; // 0x40
		::System::Func_2<::MoleMole::UIUrbanMapLeftLocationRowContext*, ::Foundation::AssetPath>* Icon; // 0x48
		::System::String* Title; // 0x50
		::System::Int32 SpecialId; // 0x58
		::System::Boolean IsSimpleTitleMode; // 0x5C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIURBANMAPLEFTLOCATIONROWCONTEXT__CTOR_OFFSET))(this);
		}

		::System::Boolean Equals(::MoleMole::UIUrbanMapLeftLocationRowContext* other)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::UIUrbanMapLeftLocationRowContext*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIURBANMAPLEFTLOCATIONROWCONTEXT_EQUALS_OFFSET))(this, other);
		}

		::System::Boolean Equals_1(::System::Object* obj)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIURBANMAPLEFTLOCATIONROWCONTEXT_EQUALS_1_OFFSET))(this, obj);
		}

		::System::Boolean __base_Equals(::System::Object* P0)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIURBANMAPLEFTLOCATIONROWCONTEXT___BASE_EQUALS_OFFSET))(this, P0);
		}
	};
}
