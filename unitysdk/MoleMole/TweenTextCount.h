#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Tween_1.h"

namespace System { class String; }
namespace UnityEngine::UI { class Text; }

#define MOLEMOLE_TWEENTEXTCOUNT_GET_TEXT_OFFSET UNITYSDK_OFFSET(0xA4E0370)
#define MOLEMOLE_TWEENTEXTCOUNT_GET_VALUE_OFFSET UNITYSDK_OFFSET(0xA4E04B0)
#define MOLEMOLE_TWEENTEXTCOUNT_METHOD_7_B433DD4DC78D168A_OFFSET UNITYSDK_OFFSET(0xA4E0540)
#define MOLEMOLE_TWEENTEXTCOUNT_METHOD_7_CC069E7D5D795C91_OFFSET UNITYSDK_OFFSET(0xA4E0680)
#define MOLEMOLE_TWEENTEXTCOUNT_SET_VALUE_OFFSET UNITYSDK_OFFSET(0xA4E04C0)
#define MOLEMOLE_TWEENTEXTCOUNT__CTOR_OFFSET UNITYSDK_OFFSET(0xA4E0830)
#define MOLEMOLE_TWEENTEXTCOUNT___BASE_SET_VALUE_OFFSET UNITYSDK_OFFSET(0xA4E0850)

namespace MoleMole
{
	inline static constexpr unsigned int TweenTextCount_TypeDefinitionIndex = 61091;

	class TweenTextCount : public ::MoleMole::Tween_1<::System::Int32>
	{
	public:
		::UnityEngine::UI::Text* Field_7_0; // 0x88
		::System::String* mes; // 0x90
		::System::Int32 Field_7_2; // 0x98

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TWEENTEXTCOUNT__CTOR_OFFSET))(this);
		}

		::UnityEngine::UI::Text* get_Text()
		{
			return ((::UnityEngine::UI::Text*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TWEENTEXTCOUNT_GET_TEXT_OFFSET))(this);
		}

		::System::Int32 get_value()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TWEENTEXTCOUNT_GET_VALUE_OFFSET))(this);
		}

		::System::Void set_value(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_TWEENTEXTCOUNT_SET_VALUE_OFFSET))(this, a1);
		}

		::System::Void Method_7_CC069E7D5D795C91(::System::Single a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_TWEENTEXTCOUNT_METHOD_7_CC069E7D5D795C91_OFFSET))(this, a1, a2);
		}

		::System::Void __base_set_value(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_TWEENTEXTCOUNT___BASE_SET_VALUE_OFFSET))(this, a1);
		}

		::System::Void Method_7_B433DD4DC78D168A(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_TWEENTEXTCOUNT_METHOD_7_B433DD4DC78D168A_OFFSET))(this, a1);
		}
	};
}
