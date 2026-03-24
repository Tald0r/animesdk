#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_7898AD955658DC56.h"

namespace System { class Action; }
namespace System { class String; }

#define CLASS_2_636B2F59931721BC_METHOD_2_01109DD29CB4D216_OFFSET UNITYSDK_OFFSET(0xAA50810)
#define CLASS_2_636B2F59931721BC_METHOD_2_04AF66402B9859B9_OFFSET UNITYSDK_OFFSET(0xAA50910)
#define CLASS_2_636B2F59931721BC_METHOD_2_06E7280E6598782E_OFFSET UNITYSDK_OFFSET(0xAA505B0)
#define CLASS_2_636B2F59931721BC_METHOD_2_90BC2B951C8F8F73_OFFSET UNITYSDK_OFFSET(0xAA50980)
#define CLASS_2_636B2F59931721BC__CTOR_OFFSET UNITYSDK_OFFSET(0xAA50900)

inline static constexpr unsigned int Class_2_636B2F59931721BC_TypeDefinitionIndex = 39001;

class Class_2_636B2F59931721BC : public ::Class_1_7898AD955658DC56
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_636B2F59931721BC__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_06E7280E6598782E(::System::Action* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + CLASS_2_636B2F59931721BC_METHOD_2_06E7280E6598782E_OFFSET))(this, a1);
	}

	::System::Void Method_2_04AF66402B9859B9(::System::Action* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + CLASS_2_636B2F59931721BC_METHOD_2_04AF66402B9859B9_OFFSET))(this, a1);
	}

	::System::Void Method_2_01109DD29CB4D216()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_636B2F59931721BC_METHOD_2_01109DD29CB4D216_OFFSET))(this);
	}

	::System::Void Method_2_90BC2B951C8F8F73(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_2_636B2F59931721BC_METHOD_2_90BC2B951C8F8F73_OFFSET))(this, a1);
	}
};
