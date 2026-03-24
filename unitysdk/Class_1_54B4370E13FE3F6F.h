#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/ValueTuple_2.h"

class Class_1_2C434B932ED0B61F;
namespace MoleMole::Battle { class Entity; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }

#define CLASS_1_54B4370E13FE3F6F_METHOD_1_416C84A9800A1F1D_OFFSET UNITYSDK_OFFSET(0x9E20B80)
#define CLASS_1_54B4370E13FE3F6F_METHOD_1_F1B1C9A08438AD97_OFFSET UNITYSDK_OFFSET(0x9E20A40)

inline static constexpr unsigned int Class_1_54B4370E13FE3F6F_TypeDefinitionIndex = 41738;

class Class_1_54B4370E13FE3F6F : public ::System::Object
{
public:
	static ::System::ValueTuple_2<::System::Boolean, ::System::String*> Method_1_F1B1C9A08438AD97(::System::String*& a1, ::System::Boolean a2, ::System::Action_1<::Class_1_2C434B932ED0B61F*>* a3)
	{
		return ((::System::ValueTuple_2<::System::Boolean, ::System::String*>(*)(::System::String*&, ::System::Boolean, ::System::Action_1<::Class_1_2C434B932ED0B61F*>*))((::PBYTE)hIl2Cpp + CLASS_1_54B4370E13FE3F6F_METHOD_1_F1B1C9A08438AD97_OFFSET))(a1, a2, a3);
	}

	static ::System::ValueTuple_2<::System::Boolean, ::System::String*> Method_1_416C84A9800A1F1D(::System::String*& a1, ::System::Boolean a2, ::MoleMole::Battle::Entity* a3, ::System::Action_1<::Class_1_2C434B932ED0B61F*>* a4)
	{
		return ((::System::ValueTuple_2<::System::Boolean, ::System::String*>(*)(::System::String*&, ::System::Boolean, ::MoleMole::Battle::Entity*, ::System::Action_1<::Class_1_2C434B932ED0B61F*>*))((::PBYTE)hIl2Cpp + CLASS_1_54B4370E13FE3F6F_METHOD_1_416C84A9800A1F1D_OFFSET))(a1, a2, a3, a4);
	}
};
