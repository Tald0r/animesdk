#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_920E995B355E8493;
namespace Code::Logic::Data::ScriptObject::Level { class Layer; }
namespace System { template <typename T1, typename T2> class Func_2; }

#define CLASS_1_10B26D56147E9AFE___C_METHOD_1_B131067221E7B531_OFFSET UNITYSDK_OFFSET(0x7EAC520)
#define CLASS_1_10B26D56147E9AFE___C_METHOD_1_EA79680CAB194A2F_OFFSET UNITYSDK_OFFSET(0x7EAC570)
#define CLASS_1_10B26D56147E9AFE___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x7EAC4D0)
#define CLASS_1_10B26D56147E9AFE___C__CTOR_OFFSET UNITYSDK_OFFSET(0x7EAC510)

inline static constexpr unsigned int Class_1_10B26D56147E9AFE___c_TypeDefinitionIndex = 39204;

class Class_1_10B26D56147E9AFE___c : public ::System::Object
{
public:
	static ::System::Func_2<::Code::Logic::Data::ScriptObject::Level::Layer*, ::System::Int32>** StaticGet___9__4_0()
	{
		return (::System::Func_2<::Code::Logic::Data::ScriptObject::Level::Layer*, ::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_10B26D56147E9AFE___c_TypeDefinitionIndex)->GetStaticField(0x323F0);
	}
	static ::System::Func_2<::Code::Logic::Data::ScriptObject::Level::Layer*, ::Class_1_920E995B355E8493*>** StaticGet___9__4_1()
	{
		return (::System::Func_2<::Code::Logic::Data::ScriptObject::Level::Layer*, ::Class_1_920E995B355E8493*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_10B26D56147E9AFE___c_TypeDefinitionIndex)->GetStaticField(0x323F8);
	}
	static ::Class_1_10B26D56147E9AFE___c** StaticGet___9()
	{
		return (::Class_1_10B26D56147E9AFE___c**)Il2CppClass::FromTypeDefinitionIndex(Class_1_10B26D56147E9AFE___c_TypeDefinitionIndex)->GetStaticField(0x32400);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_10B26D56147E9AFE___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_10B26D56147E9AFE___C__CTOR_OFFSET))(this);
	}

	::Class_1_920E995B355E8493* Method_1_B131067221E7B531(::Code::Logic::Data::ScriptObject::Level::Layer* a1)
	{
		return ((::Class_1_920E995B355E8493*(*)(::PVOID, ::Code::Logic::Data::ScriptObject::Level::Layer*))((::PBYTE)hIl2Cpp + CLASS_1_10B26D56147E9AFE___C_METHOD_1_B131067221E7B531_OFFSET))(this, a1);
	}

	::System::Int32 Method_1_EA79680CAB194A2F(::Code::Logic::Data::ScriptObject::Level::Layer* a1)
	{
		return ((::System::Int32(*)(::PVOID, ::Code::Logic::Data::ScriptObject::Level::Layer*))((::PBYTE)hIl2Cpp + CLASS_1_10B26D56147E9AFE___C_METHOD_1_EA79680CAB194A2F_OFFSET))(this, a1);
	}
};
