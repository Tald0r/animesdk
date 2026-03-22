#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole::Battle { class Entity; }

#define CLASS_3_1E068B21CFEB9F74_CLASS_1_F5182BAEBAA20D84_METHOD_1_3E7178C5ECF017DB_OFFSET UNITYSDK_OFFSET(0x7B735B0)
#define CLASS_3_1E068B21CFEB9F74_CLASS_1_F5182BAEBAA20D84_METHOD_1_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x7B73440)
#define CLASS_3_1E068B21CFEB9F74_CLASS_1_F5182BAEBAA20D84_METHOD_1_DC134833AE9D4709_OFFSET UNITYSDK_OFFSET(0x7B734A0)
#define CLASS_3_1E068B21CFEB9F74_CLASS_1_F5182BAEBAA20D84_METHOD_1_F0088C88851A7DFB_OFFSET UNITYSDK_OFFSET(0x7B73620)
#define CLASS_3_1E068B21CFEB9F74_CLASS_1_F5182BAEBAA20D84__CTOR_OFFSET UNITYSDK_OFFSET(0x7B73430)

inline static constexpr unsigned int Class_3_1E068B21CFEB9F74_Class_1_F5182BAEBAA20D84_TypeDefinitionIndex = 70868;

class Class_3_1E068B21CFEB9F74_Class_1_F5182BAEBAA20D84 : public ::System::Object
{
public:
	::System::Boolean Field_1_3; // 0x10
	::System::Boolean Field_1_2; // 0x11
	::System::Int32 Field_1_0; // 0x14
	::System::Single Field_1_1; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_1E068B21CFEB9F74_CLASS_1_F5182BAEBAA20D84__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_1E068B21CFEB9F74_CLASS_1_F5182BAEBAA20D84_METHOD_1_CA373AA1C7054598_OFFSET))(this);
	}

	::System::Void Method_1_DC134833AE9D4709(::MoleMole::Battle::Entity* a1, ::System::Int32 a2, ::System::Single a3, ::System::Boolean a4, ::System::Boolean a5)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*, ::System::Int32, ::System::Single, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_3_1E068B21CFEB9F74_CLASS_1_F5182BAEBAA20D84_METHOD_1_DC134833AE9D4709_OFFSET))(this, a1, a2, a3, a4, a5);
	}

	::System::Boolean Method_1_F0088C88851A7DFB()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_1E068B21CFEB9F74_CLASS_1_F5182BAEBAA20D84_METHOD_1_F0088C88851A7DFB_OFFSET))(this);
	}

	::System::Void Method_1_3E7178C5ECF017DB(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_3_1E068B21CFEB9F74_CLASS_1_F5182BAEBAA20D84_METHOD_1_3E7178C5ECF017DB_OFFSET))(this, a1);
	}
};
