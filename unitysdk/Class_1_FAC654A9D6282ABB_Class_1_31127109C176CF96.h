#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class ConfigUISound; }
namespace System { class Action; }

#define CLASS_1_FAC654A9D6282ABB_CLASS_1_31127109C176CF96_METHOD_1_715951D5AA0EE5EB_OFFSET UNITYSDK_OFFSET(0x7202E00)
#define CLASS_1_FAC654A9D6282ABB_CLASS_1_31127109C176CF96__CTOR_OFFSET UNITYSDK_OFFSET(0x7202DF0)

inline static constexpr unsigned int Class_1_FAC654A9D6282ABB_Class_1_31127109C176CF96_TypeDefinitionIndex = 36946;

class Class_1_FAC654A9D6282ABB_Class_1_31127109C176CF96 : public ::System::Object
{
public:
	::System::Action* Field_1_0; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_FAC654A9D6282ABB_CLASS_1_31127109C176CF96__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_715951D5AA0EE5EB(::MoleMole::ConfigUISound* a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::ConfigUISound*))((::PBYTE)hIl2Cpp + CLASS_1_FAC654A9D6282ABB_CLASS_1_31127109C176CF96_METHOD_1_715951D5AA0EE5EB_OFFSET))(this, a1);
	}
};
