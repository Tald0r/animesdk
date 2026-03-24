#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_E87F1D15F1D4AC72.h"

class Class_2_777A5D016ADC7368;
class Class_3_7207D1AA0A064289_1_Class_2_46D086C2A59C4138_1;
namespace MoleMole { class UIControlCollection; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_3_7207D1AA0A064289_1_METHOD_3_0865E94460F11643_OFFSET UNITYSDK_OFFSET(0x8B6C280)
#define CLASS_3_7207D1AA0A064289_1_METHOD_3_79D44D69484C8F4A_OFFSET UNITYSDK_OFFSET(0x8B6BDC0)
#define CLASS_3_7207D1AA0A064289_1_METHOD_3_9A079478A7ED162C_OFFSET UNITYSDK_OFFSET(0x8B6BF50)
#define CLASS_3_7207D1AA0A064289_1__CTOR_OFFSET UNITYSDK_OFFSET(0x8B6C370)

inline static constexpr unsigned int Class_3_7207D1AA0A064289_1_TypeDefinitionIndex = 73135;

class Class_3_7207D1AA0A064289_1 : public ::Class_2_E87F1D15F1D4AC72
{
public:
	::System::Collections::Generic::List_1<::Class_3_7207D1AA0A064289_1_Class_2_46D086C2A59C4138_1*>* Field_3_0; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_7207D1AA0A064289_1__CTOR_OFFSET))(this);
	}

	::System::Void Method_3_79D44D69484C8F4A(::Class_2_777A5D016ADC7368* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_777A5D016ADC7368*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_3_7207D1AA0A064289_1_METHOD_3_79D44D69484C8F4A_OFFSET))(this, a1, a2);
	}

	::System::Collections::Generic::List_1<::Class_3_7207D1AA0A064289_1_Class_2_46D086C2A59C4138_1*>* Method_3_9A079478A7ED162C(::Class_2_777A5D016ADC7368* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Collections::Generic::List_1<::Class_3_7207D1AA0A064289_1_Class_2_46D086C2A59C4138_1*>*(*)(::PVOID, ::Class_2_777A5D016ADC7368*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_3_7207D1AA0A064289_1_METHOD_3_9A079478A7ED162C_OFFSET))(this, a1, a2);
	}

	::System::Void Method_3_0865E94460F11643()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_7207D1AA0A064289_1_METHOD_3_0865E94460F11643_OFFSET))(this);
	}
};
