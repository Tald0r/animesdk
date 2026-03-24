#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_43BD383C98B4C0C5_30;
namespace MoleMole::Battle { class Entity; }

#define CLASS_3_58DDBAFC56C73DE5_CLASS_1_9DADAB33E326717D_METHOD_1_51BC74883F962039_OFFSET UNITYSDK_OFFSET(0x6B78810)
#define CLASS_3_58DDBAFC56C73DE5_CLASS_1_9DADAB33E326717D__CTOR_OFFSET UNITYSDK_OFFSET(0x6B78800)

inline static constexpr unsigned int Class_3_58DDBAFC56C73DE5_Class_1_9DADAB33E326717D_TypeDefinitionIndex = 40133;

class Class_3_58DDBAFC56C73DE5_Class_1_9DADAB33E326717D : public ::System::Object
{
public:
	::Class_1_43BD383C98B4C0C5_30* Field_1_0; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_58DDBAFC56C73DE5_CLASS_1_9DADAB33E326717D__CTOR_OFFSET))(this);
	}

	::System::Boolean Method_1_51BC74883F962039(::MoleMole::Battle::Entity* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + CLASS_3_58DDBAFC56C73DE5_CLASS_1_9DADAB33E326717D_METHOD_1_51BC74883F962039_OFFSET))(this, a1);
	}
};
