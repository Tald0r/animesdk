#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_E87F1D15F1D4AC72.h"

class Class_2_777A5D016ADC7368;
class Class_3_7207D1AA0A064289_Class_2_46D086C2A59C4138;
namespace MoleMole { class UIControlCollection; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_3_7207D1AA0A064289_METHOD_3_0865E94460F11643_OFFSET UNITYSDK_OFFSET(0x9F43640)
#define CLASS_3_7207D1AA0A064289_METHOD_3_79D44D69484C8F4A_OFFSET UNITYSDK_OFFSET(0x9F43180)
#define CLASS_3_7207D1AA0A064289_METHOD_3_9A079478A7ED162C_OFFSET UNITYSDK_OFFSET(0x9F43310)
#define CLASS_3_7207D1AA0A064289__CTOR_OFFSET UNITYSDK_OFFSET(0x9F43730)

inline static constexpr unsigned int Class_3_7207D1AA0A064289_TypeDefinitionIndex = 39587;

class Class_3_7207D1AA0A064289 : public ::Class_2_E87F1D15F1D4AC72
{
public:
	::System::Collections::Generic::List_1<::Class_3_7207D1AA0A064289_Class_2_46D086C2A59C4138*>* Field_3_0; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_7207D1AA0A064289__CTOR_OFFSET))(this);
	}

	::System::Void Method_3_79D44D69484C8F4A(::Class_2_777A5D016ADC7368* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_777A5D016ADC7368*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_3_7207D1AA0A064289_METHOD_3_79D44D69484C8F4A_OFFSET))(this, a1, a2);
	}

	::System::Void Method_3_0865E94460F11643()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_7207D1AA0A064289_METHOD_3_0865E94460F11643_OFFSET))(this);
	}

	::System::Collections::Generic::List_1<::Class_3_7207D1AA0A064289_Class_2_46D086C2A59C4138*>* Method_3_9A079478A7ED162C(::Class_2_777A5D016ADC7368* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Collections::Generic::List_1<::Class_3_7207D1AA0A064289_Class_2_46D086C2A59C4138*>*(*)(::PVOID, ::Class_2_777A5D016ADC7368*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_3_7207D1AA0A064289_METHOD_3_9A079478A7ED162C_OFFSET))(this, a1, a2);
	}
};
