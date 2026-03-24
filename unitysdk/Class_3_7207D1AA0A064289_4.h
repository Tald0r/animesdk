#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_E87F1D15F1D4AC72.h"

class Class_2_777A5D016ADC7368;
class Class_3_7207D1AA0A064289_4_Class_2_46D086C2A59C4138_4;
namespace MoleMole { class UIControlCollection; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_3_7207D1AA0A064289_4_METHOD_3_0865E94460F11643_OFFSET UNITYSDK_OFFSET(0xB6184B0)
#define CLASS_3_7207D1AA0A064289_4_METHOD_3_79D44D69484C8F4A_OFFSET UNITYSDK_OFFSET(0xB617FF0)
#define CLASS_3_7207D1AA0A064289_4_METHOD_3_9A079478A7ED162C_OFFSET UNITYSDK_OFFSET(0xB618180)
#define CLASS_3_7207D1AA0A064289_4__CTOR_OFFSET UNITYSDK_OFFSET(0xB6185A0)

inline static constexpr unsigned int Class_3_7207D1AA0A064289_4_TypeDefinitionIndex = 74252;

class Class_3_7207D1AA0A064289_4 : public ::Class_2_E87F1D15F1D4AC72
{
public:
	::System::Collections::Generic::List_1<::Class_3_7207D1AA0A064289_4_Class_2_46D086C2A59C4138_4*>* Field_3_0; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_7207D1AA0A064289_4__CTOR_OFFSET))(this);
	}

	::System::Void Method_3_79D44D69484C8F4A(::Class_2_777A5D016ADC7368* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_777A5D016ADC7368*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_3_7207D1AA0A064289_4_METHOD_3_79D44D69484C8F4A_OFFSET))(this, a1, a2);
	}

	::System::Collections::Generic::List_1<::Class_3_7207D1AA0A064289_4_Class_2_46D086C2A59C4138_4*>* Method_3_9A079478A7ED162C(::Class_2_777A5D016ADC7368* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Collections::Generic::List_1<::Class_3_7207D1AA0A064289_4_Class_2_46D086C2A59C4138_4*>*(*)(::PVOID, ::Class_2_777A5D016ADC7368*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_3_7207D1AA0A064289_4_METHOD_3_9A079478A7ED162C_OFFSET))(this, a1, a2);
	}

	::System::Void Method_3_0865E94460F11643()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_7207D1AA0A064289_4_METHOD_3_0865E94460F11643_OFFSET))(this);
	}
};
