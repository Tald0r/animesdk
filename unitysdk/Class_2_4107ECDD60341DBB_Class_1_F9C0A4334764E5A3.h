#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_2_4107ECDD60341DBB;
namespace MoleMole { class ServerListInfo; }
namespace System { class Action; }
namespace System { class String; }

#define CLASS_2_4107ECDD60341DBB_CLASS_1_F9C0A4334764E5A3_METHOD_1_D77B5CAF1B0C64C1_OFFSET UNITYSDK_OFFSET(0x99C7710)
#define CLASS_2_4107ECDD60341DBB_CLASS_1_F9C0A4334764E5A3__CTOR_OFFSET UNITYSDK_OFFSET(0x99C7700)

inline static constexpr unsigned int Class_2_4107ECDD60341DBB_Class_1_F9C0A4334764E5A3_TypeDefinitionIndex = 55401;

class Class_2_4107ECDD60341DBB_Class_1_F9C0A4334764E5A3 : public ::System::Object
{
public:
	::Class_2_4107ECDD60341DBB* Field_1_0; // 0x10
	::System::Action* Field_1_2; // 0x18
	::MoleMole::ServerListInfo* Field_1_1; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_4107ECDD60341DBB_CLASS_1_F9C0A4334764E5A3__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_D77B5CAF1B0C64C1(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_2_4107ECDD60341DBB_CLASS_1_F9C0A4334764E5A3_METHOD_1_D77B5CAF1B0C64C1_OFFSET))(this, a1);
	}
};
