#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_3_FDBF29E550D962C5.h"

namespace MoleMole { class UIMainCityGeneralTipsWidgetController; }
namespace MoleMole { class UIMainCityGeneralTipsWidgetController_Context; }
namespace System { class String; }

#define CLASS_4_DC17BE7B59F38623_METHOD_4_3CCA0B8A31B650A8_OFFSET UNITYSDK_OFFSET(0x626A8E0)
#define CLASS_4_DC17BE7B59F38623_METHOD_4_56CE4AFC5339F746_OFFSET UNITYSDK_OFFSET(0x626AB80)
#define CLASS_4_DC17BE7B59F38623_METHOD_4_C74CF020AA42ED85_OFFSET UNITYSDK_OFFSET(0x626A7D0)
#define CLASS_4_DC17BE7B59F38623_METHOD_4_FBF2CB29FD3B55E6_OFFSET UNITYSDK_OFFSET(0x626AC80)
#define CLASS_4_DC17BE7B59F38623__CTOR_OFFSET UNITYSDK_OFFSET(0x626A7E0)

inline static constexpr unsigned int Class_4_DC17BE7B59F38623_TypeDefinitionIndex = 73462;

class Class_4_DC17BE7B59F38623 : public ::Class_3_FDBF29E550D962C5
{
public:
	// static const ::System::String* Field_4_0; // 0x0
	::MoleMole::UIMainCityGeneralTipsWidgetController_Context* Field_4_1; // 0x30
	::MoleMole::UIMainCityGeneralTipsWidgetController* Field_4_2; // 0x38

	::System::Void _ctor(::System::String* a1, ::System::Boolean a2, ::System::Boolean a3)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_4_DC17BE7B59F38623__CTOR_OFFSET))(this, a1, a2, a3);
	}

	::System::Int32 Method_4_C74CF020AA42ED85()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_DC17BE7B59F38623_METHOD_4_C74CF020AA42ED85_OFFSET))(this);
	}

	::System::Void Method_4_3CCA0B8A31B650A8()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_DC17BE7B59F38623_METHOD_4_3CCA0B8A31B650A8_OFFSET))(this);
	}

	::System::Void Method_4_56CE4AFC5339F746()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_DC17BE7B59F38623_METHOD_4_56CE4AFC5339F746_OFFSET))(this);
	}

	::System::Void Method_4_FBF2CB29FD3B55E6()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_DC17BE7B59F38623_METHOD_4_FBF2CB29FD3B55E6_OFFSET))(this);
	}
};
