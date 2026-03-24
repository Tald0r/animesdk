#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class ConfigHollowChessboardEntityBehavior; }
namespace System { class Action; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }

#define CLASS_1_DABBB9C83801AADE_METHOD_1_074045F1FBDF8496_OFFSET UNITYSDK_OFFSET(0xA086820)
#define CLASS_1_DABBB9C83801AADE_METHOD_1_415752109343FC19_OFFSET UNITYSDK_OFFSET(0xA086630)
#define CLASS_1_DABBB9C83801AADE_METHOD_1_4C9717BAC49A1DCF_OFFSET UNITYSDK_OFFSET(0xA0867B0)
#define CLASS_1_DABBB9C83801AADE_METHOD_1_ACA3FA9BFB1C5DA2_OFFSET UNITYSDK_OFFSET(0xA086D20)
#define CLASS_1_DABBB9C83801AADE_METHOD_1_D0BD1377F2594D33_OFFSET UNITYSDK_OFFSET(0xA086BC0)

inline static constexpr unsigned int Class_1_DABBB9C83801AADE_TypeDefinitionIndex = 45175;

class Class_1_DABBB9C83801AADE : public ::System::Object
{
public:
	static ::MoleMole::ConfigHollowChessboardEntityBehavior** StaticGet_Field_1_0()
	{
		return (::MoleMole::ConfigHollowChessboardEntityBehavior**)Il2CppClass::FromTypeDefinitionIndex(Class_1_DABBB9C83801AADE_TypeDefinitionIndex)->GetStaticField(0x3DFC0);
	}

	static ::System::Void Method_1_415752109343FC19(::System::Single a1, ::System::Action_1<::System::Single>* a2, ::System::Action_1<::System::String*>* a3, ::System::String* a4)
	{
		return ((::System::Void(*)(::System::Single, ::System::Action_1<::System::Single>*, ::System::Action_1<::System::String*>*, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_DABBB9C83801AADE_METHOD_1_415752109343FC19_OFFSET))(a1, a2, a3, a4);
	}

	static ::System::Void Method_1_074045F1FBDF8496(::System::Boolean a1, ::System::Action* a2)
	{
		return ((::System::Void(*)(::System::Boolean, ::System::Action*))((::PBYTE)hIl2Cpp + CLASS_1_DABBB9C83801AADE_METHOD_1_074045F1FBDF8496_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_4C9717BAC49A1DCF(::System::Boolean a1, ::System::Action* a2)
	{
		return ((::System::Void(*)(::System::Boolean, ::System::Action*))((::PBYTE)hIl2Cpp + CLASS_1_DABBB9C83801AADE_METHOD_1_4C9717BAC49A1DCF_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_D0BD1377F2594D33()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_DABBB9C83801AADE_METHOD_1_D0BD1377F2594D33_OFFSET))();
	}

	static ::MoleMole::ConfigHollowChessboardEntityBehavior* Method_1_ACA3FA9BFB1C5DA2()
	{
		return ((::MoleMole::ConfigHollowChessboardEntityBehavior*(*)())((::PBYTE)hIl2Cpp + CLASS_1_DABBB9C83801AADE_METHOD_1_ACA3FA9BFB1C5DA2_OFFSET))();
	}
};
