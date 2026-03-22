#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_1D144748B0C0612C_2.h"
#include "unitysdk/MoleMole/EntityHandle.h"

namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_3_62762C6038782025_DISPOSE_OFFSET UNITYSDK_OFFSET(0xB7F5960)
#define CLASS_3_62762C6038782025_METHOD_3_41C33A998A66200C_OFFSET UNITYSDK_OFFSET(0xB7F5B10)
#define CLASS_3_62762C6038782025_METHOD_3_9681042564541CD6_OFFSET UNITYSDK_OFFSET(0xB7F58D0)
#define CLASS_3_62762C6038782025_METHOD_3_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0xB7F5A30)
#define CLASS_3_62762C6038782025__CTOR_OFFSET UNITYSDK_OFFSET(0xB7F5A90)

inline static constexpr unsigned int Class_3_62762C6038782025_TypeDefinitionIndex = 52091;

class Class_3_62762C6038782025 : public ::Class_2_1D144748B0C0612C_2
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_62762C6038782025__CTOR_OFFSET))(this);
	}

	::System::Void Method_3_9681042564541CD6()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_62762C6038782025_METHOD_3_9681042564541CD6_OFFSET))(this);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_62762C6038782025_DISPOSE_OFFSET))(this);
	}

	::System::Void Method_3_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_62762C6038782025_METHOD_3_CA373AA1C7054598_OFFSET))(this);
	}

	static ::Class_3_62762C6038782025* Method_3_41C33A998A66200C(::System::Boolean a1, ::System::Collections::Generic::List_1<::System::String*>*& a2, ::System::Collections::Generic::List_1<::System::String*>*& a3, ::System::Boolean a4, ::MoleMole::EntityHandle& a5, ::System::Collections::Generic::List_1<::System::String*>*& a6, ::System::Int32& a7)
	{
		return ((::Class_3_62762C6038782025*(*)(::System::Boolean, ::System::Collections::Generic::List_1<::System::String*>*&, ::System::Collections::Generic::List_1<::System::String*>*&, ::System::Boolean, ::MoleMole::EntityHandle&, ::System::Collections::Generic::List_1<::System::String*>*&, ::System::Int32&))((::PBYTE)hIl2Cpp + CLASS_3_62762C6038782025_METHOD_3_41C33A998A66200C_OFFSET))(a1, a2, a3, a4, a5, a6, a7);
	}
};
