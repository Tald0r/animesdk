#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole::Battle { class Entity; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_2_AF0F60B7EC92FD6A_CLASS_1_940246CF50224131_METHOD_1_3F41C5C9A4F7DFC1_OFFSET UNITYSDK_OFFSET(0xBC50060)
#define CLASS_2_AF0F60B7EC92FD6A_CLASS_1_940246CF50224131__CTOR_OFFSET UNITYSDK_OFFSET(0xBC50050)

inline static constexpr unsigned int Class_2_AF0F60B7EC92FD6A_Class_1_940246CF50224131_TypeDefinitionIndex = 56915;

class Class_2_AF0F60B7EC92FD6A_Class_1_940246CF50224131 : public ::System::Object
{
public:
	::System::Collections::Generic::List_1<::MoleMole::Battle::Entity*>* Field_1_0; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_AF0F60B7EC92FD6A_CLASS_1_940246CF50224131__CTOR_OFFSET))(this);
	}

	::System::Boolean Method_1_3F41C5C9A4F7DFC1(::MoleMole::Battle::Entity* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + CLASS_2_AF0F60B7EC92FD6A_CLASS_1_940246CF50224131_METHOD_1_3F41C5C9A4F7DFC1_OFFSET))(this, a1);
	}
};
