#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class ConfigUILight; }
namespace System { class Action; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }

#define CLASS_1_9F3D928DE54FC975_METHOD_1_0BE1846AC20D43BE_OFFSET UNITYSDK_OFFSET(0x7434160)
#define CLASS_1_9F3D928DE54FC975_METHOD_1_69983B1C23B6CFD2_OFFSET UNITYSDK_OFFSET(0x74343C0)
#define CLASS_1_9F3D928DE54FC975_METHOD_1_A8AE4A9A45E37F95_OFFSET UNITYSDK_OFFSET(0x7434050)

inline static constexpr unsigned int Class_1_9F3D928DE54FC975_TypeDefinitionIndex = 46396;

class Class_1_9F3D928DE54FC975 : public ::System::Object
{
public:
	static ::MoleMole::ConfigUILight** StaticGet_Field_1_0()
	{
		return (::MoleMole::ConfigUILight**)Il2CppClass::FromTypeDefinitionIndex(Class_1_9F3D928DE54FC975_TypeDefinitionIndex)->GetStaticField(0x33A20);
	}

	static ::System::Void Method_1_A8AE4A9A45E37F95(::System::Single a1, ::System::Action_1<::System::Single>* a2, ::System::Action_1<::System::String*>* a3, ::System::String* a4)
	{
		return ((::System::Void(*)(::System::Single, ::System::Action_1<::System::Single>*, ::System::Action_1<::System::String*>*, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_9F3D928DE54FC975_METHOD_1_A8AE4A9A45E37F95_OFFSET))(a1, a2, a3, a4);
	}

	static ::System::Void Method_1_0BE1846AC20D43BE(::System::Boolean a1, ::System::Action* a2)
	{
		return ((::System::Void(*)(::System::Boolean, ::System::Action*))((::PBYTE)hIl2Cpp + CLASS_1_9F3D928DE54FC975_METHOD_1_0BE1846AC20D43BE_OFFSET))(a1, a2);
	}

	static ::MoleMole::ConfigUILight* Method_1_69983B1C23B6CFD2()
	{
		return ((::MoleMole::ConfigUILight*(*)())((::PBYTE)hIl2Cpp + CLASS_1_9F3D928DE54FC975_METHOD_1_69983B1C23B6CFD2_OFFSET))();
	}
};
