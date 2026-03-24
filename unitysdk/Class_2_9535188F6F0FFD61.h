#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_EEA0111A28582B57.h"

class Class_2_60DDD9C206686F44;
class Class_2_777A5D016ADC7368;
namespace MoleMole { class UIControlCollection; }
namespace MoleMole { class UISuibianDirectionIconWidgetController; }
template <typename T> class Class_3_647A206587033F4E;

#define CLASS_2_9535188F6F0FFD61_METHOD_2_43ED31B02AD5E38E_OFFSET UNITYSDK_OFFSET(0xD42A5D0)
#define CLASS_2_9535188F6F0FFD61_METHOD_2_9DE87B16AD0A605E_OFFSET UNITYSDK_OFFSET(0xD42A7A0)
#define CLASS_2_9535188F6F0FFD61_METHOD_2_C8903A36ECBA4078_OFFSET UNITYSDK_OFFSET(0xD42A890)
#define CLASS_2_9535188F6F0FFD61__CTOR_OFFSET UNITYSDK_OFFSET(0xD42A880)

inline static constexpr unsigned int Class_2_9535188F6F0FFD61_TypeDefinitionIndex = 50198;

class Class_2_9535188F6F0FFD61 : public ::Class_1_EEA0111A28582B57
{
public:
	::Class_2_60DDD9C206686F44* Field_2_2; // 0x18
	::Class_3_647A206587033F4E<::MoleMole::UISuibianDirectionIconWidgetController*>* Field_2_0; // 0x20
	::Class_3_647A206587033F4E<::MoleMole::UISuibianDirectionIconWidgetController*>* Field_2_1; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_9535188F6F0FFD61__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_43ED31B02AD5E38E(::Class_2_777A5D016ADC7368* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_777A5D016ADC7368*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_9535188F6F0FFD61_METHOD_2_43ED31B02AD5E38E_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_C8903A36ECBA4078(::Class_2_777A5D016ADC7368* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_777A5D016ADC7368*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_9535188F6F0FFD61_METHOD_2_C8903A36ECBA4078_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_9DE87B16AD0A605E()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_9535188F6F0FFD61_METHOD_2_9DE87B16AD0A605E_OFFSET))(this);
	}
};
