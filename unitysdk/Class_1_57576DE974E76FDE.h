#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole::Config { class ConfigHollowChessboardCamera; }
namespace System { class Action; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }

#define CLASS_1_57576DE974E76FDE_METHOD_1_074045F1FBDF8496_OFFSET UNITYSDK_OFFSET(0x71267A0)
#define CLASS_1_57576DE974E76FDE_METHOD_1_415752109343FC19_OFFSET UNITYSDK_OFFSET(0x7126B40)
#define CLASS_1_57576DE974E76FDE_METHOD_1_4C9717BAC49A1DCF_OFFSET UNITYSDK_OFFSET(0x7126730)
#define CLASS_1_57576DE974E76FDE_METHOD_1_D0BD1377F2594D33_OFFSET UNITYSDK_OFFSET(0x71265D0)
#define CLASS_1_57576DE974E76FDE_METHOD_1_EEC2144FDC4E069C_OFFSET UNITYSDK_OFFSET(0x7126540)

inline static constexpr unsigned int Class_1_57576DE974E76FDE_TypeDefinitionIndex = 51490;

class Class_1_57576DE974E76FDE : public ::System::Object
{
public:
	static ::MoleMole::Config::ConfigHollowChessboardCamera** StaticGet_Field_1_0()
	{
		return (::MoleMole::Config::ConfigHollowChessboardCamera**)Il2CppClass::FromTypeDefinitionIndex(Class_1_57576DE974E76FDE_TypeDefinitionIndex)->GetStaticField(0x3B180);
	}

	static ::MoleMole::Config::ConfigHollowChessboardCamera* Method_1_EEC2144FDC4E069C()
	{
		return ((::MoleMole::Config::ConfigHollowChessboardCamera*(*)())((::PBYTE)hIl2Cpp + CLASS_1_57576DE974E76FDE_METHOD_1_EEC2144FDC4E069C_OFFSET))();
	}

	static ::System::Void Method_1_D0BD1377F2594D33()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_57576DE974E76FDE_METHOD_1_D0BD1377F2594D33_OFFSET))();
	}

	static ::System::Void Method_1_074045F1FBDF8496(::System::Boolean a1, ::System::Action* a2)
	{
		return ((::System::Void(*)(::System::Boolean, ::System::Action*))((::PBYTE)hIl2Cpp + CLASS_1_57576DE974E76FDE_METHOD_1_074045F1FBDF8496_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_415752109343FC19(::System::Single a1, ::System::Action_1<::System::Single>* a2, ::System::Action_1<::System::String*>* a3, ::System::String* a4)
	{
		return ((::System::Void(*)(::System::Single, ::System::Action_1<::System::Single>*, ::System::Action_1<::System::String*>*, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_57576DE974E76FDE_METHOD_1_415752109343FC19_OFFSET))(a1, a2, a3, a4);
	}

	static ::System::Void Method_1_4C9717BAC49A1DCF(::System::Boolean a1, ::System::Action* a2)
	{
		return ((::System::Void(*)(::System::Boolean, ::System::Action*))((::PBYTE)hIl2Cpp + CLASS_1_57576DE974E76FDE_METHOD_1_4C9717BAC49A1DCF_OFFSET))(a1, a2);
	}
};
