#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_C836D00248E6EFFE.h"
#include "unitysdk/MoleMole/Config/EntityType.h"
#include "unitysdk/Struct_2_3A83F3B65F412502.h"
#include "unitysdk/Struct_2_FC595D1A561D8C6F_1.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_1_8289F2785D9AA990;
class Class_1_B7E341C5F1A6F199;
class Class_2_0F138252A5783001;
class Class_2_14986121AA61AD99;
class Class_2_8CAD669444D1F6DE;
class Class_2_E4A383A32564601B;
class Class_3_87D60E227EA9E985;
class Class_3_F35B080B137ECC46;
class Class_3_F41D242A20F8FE06;
namespace MoleMole { class MonoConfigurableCollider; }
namespace MoleMole::Battle { class ColliderEventDispatcher; }
namespace MoleMole::Battle { class Entity; }
namespace System { class Object; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Collider; }
namespace UnityEngine { class Transform; }

#define CLASS_2_4237F569373F13B0_METHOD_2_0254BCE02D3CF10C_OFFSET UNITYSDK_OFFSET(0x6D50490)
#define CLASS_2_4237F569373F13B0_METHOD_2_088B50B583DFD4E2_OFFSET UNITYSDK_OFFSET(0x6D4B4D0)
#define CLASS_2_4237F569373F13B0_METHOD_2_1659BCB6D1A9FC34_OFFSET UNITYSDK_OFFSET(0x6D4C1C0)
#define CLASS_2_4237F569373F13B0_METHOD_2_1AF099404F24215A_OFFSET UNITYSDK_OFFSET(0x6D4F9A0)
#define CLASS_2_4237F569373F13B0_METHOD_2_1EA0C3C861855A26_OFFSET UNITYSDK_OFFSET(0x6D512C0)
#define CLASS_2_4237F569373F13B0_METHOD_2_23AFB2EE0CDF75BD_OFFSET UNITYSDK_OFFSET(0x6D4F1C0)
#define CLASS_2_4237F569373F13B0_METHOD_2_247244D4DA8509BE_OFFSET UNITYSDK_OFFSET(0x6D4FA90)
#define CLASS_2_4237F569373F13B0_METHOD_2_2685B6183E614529_OFFSET UNITYSDK_OFFSET(0x6D4E840)
#define CLASS_2_4237F569373F13B0_METHOD_2_289F28027FF47717_OFFSET UNITYSDK_OFFSET(0x6D4D5B0)
#define CLASS_2_4237F569373F13B0_METHOD_2_2A6B87C525933554_1_OFFSET UNITYSDK_OFFSET(0x6D51430)
#define CLASS_2_4237F569373F13B0_METHOD_2_2A6B87C525933554_OFFSET UNITYSDK_OFFSET(0x6D50D70)
#define CLASS_2_4237F569373F13B0_METHOD_2_2EAA21E8B2B8E133_OFFSET UNITYSDK_OFFSET(0x6D50AB0)
#define CLASS_2_4237F569373F13B0_METHOD_2_31CF909FE034F62F_OFFSET UNITYSDK_OFFSET(0x6D50C70)
#define CLASS_2_4237F569373F13B0_METHOD_2_40E03D354D1ACC85_OFFSET UNITYSDK_OFFSET(0x6D4B220)
#define CLASS_2_4237F569373F13B0_METHOD_2_45AA2F5085C2C40D_OFFSET UNITYSDK_OFFSET(0x6D4D370)
#define CLASS_2_4237F569373F13B0_METHOD_2_4A958D3D056F27B7_OFFSET UNITYSDK_OFFSET(0x6D4D640)
#define CLASS_2_4237F569373F13B0_METHOD_2_55CBDDF756DAED1D_OFFSET UNITYSDK_OFFSET(0x6D4D730)
#define CLASS_2_4237F569373F13B0_METHOD_2_60E1F7F58CCF739F_OFFSET UNITYSDK_OFFSET(0x6D4BF80)
#define CLASS_2_4237F569373F13B0_METHOD_2_6EADDB204A4C60FC_OFFSET UNITYSDK_OFFSET(0x6D4E8B0)
#define CLASS_2_4237F569373F13B0_METHOD_2_70589F89E4D22649_OFFSET UNITYSDK_OFFSET(0x6D4FD50)
#define CLASS_2_4237F569373F13B0_METHOD_2_7619D93B61B6E841_OFFSET UNITYSDK_OFFSET(0x6D512B0)
#define CLASS_2_4237F569373F13B0_METHOD_2_7B2B1A512A5C358D_OFFSET UNITYSDK_OFFSET(0x6D4B100)
#define CLASS_2_4237F569373F13B0_METHOD_2_8B4B3FEAD1B0C4A6_OFFSET UNITYSDK_OFFSET(0x6D4C850)
#define CLASS_2_4237F569373F13B0_METHOD_2_8CE0803574BB66D7_OFFSET UNITYSDK_OFFSET(0x6D51360)
#define CLASS_2_4237F569373F13B0_METHOD_2_96F6E9EA89A38FD1_OFFSET UNITYSDK_OFFSET(0x6D4DE00)
#define CLASS_2_4237F569373F13B0_METHOD_2_98511BB23D2E3748_1_OFFSET UNITYSDK_OFFSET(0x6D514A0)
#define CLASS_2_4237F569373F13B0_METHOD_2_98511BB23D2E3748_OFFSET UNITYSDK_OFFSET(0x6D4D1F0)
#define CLASS_2_4237F569373F13B0_METHOD_2_A52D4E0DDDA2693D_OFFSET UNITYSDK_OFFSET(0x6D50770)
#define CLASS_2_4237F569373F13B0_METHOD_2_BBFA454EC3788EA6_OFFSET UNITYSDK_OFFSET(0x6D4F5D0)
#define CLASS_2_4237F569373F13B0_METHOD_2_C99C0F2C013B0BE0_OFFSET UNITYSDK_OFFSET(0x6D50E60)
#define CLASS_2_4237F569373F13B0_METHOD_2_CA373AA1C7054598_1_OFFSET UNITYSDK_OFFSET(0x6D51250)
#define CLASS_2_4237F569373F13B0_METHOD_2_CA373AA1C7054598_2_OFFSET UNITYSDK_OFFSET(0x6D513D0)
#define CLASS_2_4237F569373F13B0_METHOD_2_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x6D4F160)
#define CLASS_2_4237F569373F13B0_METHOD_2_CD9F3CEFB366C27A_OFFSET UNITYSDK_OFFSET(0x6D50A30)
#define CLASS_2_4237F569373F13B0_METHOD_2_D3ECAA2B74ABF01D_OFFSET UNITYSDK_OFFSET(0x6D4F480)
#define CLASS_2_4237F569373F13B0_METHOD_2_D51B57322AA430CA_OFFSET UNITYSDK_OFFSET(0x6D4D260)
#define CLASS_2_4237F569373F13B0_METHOD_2_E6FA84ECDEF620CE_OFFSET UNITYSDK_OFFSET(0x6D4B560)
#define CLASS_2_4237F569373F13B0_METHOD_2_EC73283227CA25E8_OFFSET UNITYSDK_OFFSET(0x6D4DB10)
#define CLASS_2_4237F569373F13B0_METHOD_2_F0088C88851A7DFB_OFFSET UNITYSDK_OFFSET(0x6D51350)
#define CLASS_2_4237F569373F13B0_METHOD_2_F2991A902CA63635_OFFSET UNITYSDK_OFFSET(0x6D4D880)
#define CLASS_2_4237F569373F13B0_METHOD_2_F4F1E7D1CC26024A_OFFSET UNITYSDK_OFFSET(0x6D4E220)
#define CLASS_2_4237F569373F13B0_METHOD_2_F7810952FE14E15C_OFFSET UNITYSDK_OFFSET(0x6D50160)
#define CLASS_2_4237F569373F13B0_METHOD_2_FB61A10508D8E380_OFFSET UNITYSDK_OFFSET(0x6D4FE80)
#define CLASS_2_4237F569373F13B0_METHOD_2_FE619656727840B1_OFFSET UNITYSDK_OFFSET(0x6D50DE0)
#define CLASS_2_4237F569373F13B0__CCTOR_OFFSET UNITYSDK_OFFSET(0x6D4E080)
#define CLASS_2_4237F569373F13B0__CTOR_OFFSET UNITYSDK_OFFSET(0x6D4DEB0)

inline static constexpr unsigned int Class_2_4237F569373F13B0_TypeDefinitionIndex = 59227;

class Class_2_4237F569373F13B0 : public ::Class_1_C836D00248E6EFFE
{
public:
	static ::System::Collections::Generic::HashSet_1<::MoleMole::Config::EntityType>** StaticGet_Field_2_9()
	{
		return (::System::Collections::Generic::HashSet_1<::MoleMole::Config::EntityType>**)Il2CppClass::FromTypeDefinitionIndex(Class_2_4237F569373F13B0_TypeDefinitionIndex)->GetStaticField(0x42860);
	}
	::MoleMole::Battle::ColliderEventDispatcher* Field_2_4; // 0x50
	::System::String* Field_2_15; // 0x58
	::MoleMole::MonoConfigurableCollider* Field_2_1; // 0x60
	::UnityEngine::Collider* Field_2_2; // 0x68
	::MoleMole::Battle::Entity* Field_2_8; // 0x70
	::System::Collections::Generic::HashSet_1<::System::UInt32>* Field_2_5; // 0x78
	::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::Collections::Generic::HashSet_1<::UnityEngine::Collider*>*>* Field_2_7; // 0x80
	::Class_3_87D60E227EA9E985* Field_2_0; // 0x88
	::System::Collections::Generic::HashSet_1<::System::UInt32>* Field_2_6; // 0x90
	::Class_1_8289F2785D9AA990* Field_2_12; // 0x98
	::Class_3_F41D242A20F8FE06* Field_2_13; // 0xA0
	::Struct_2_FC595D1A561D8C6F_1 Field_2_14; // 0xA8
	::System::Boolean Field_2_11; // 0xC4
	::System::Boolean Field_2_10; // 0xC5
	::System::Int32 Field_2_3; // 0xC8

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_4237F569373F13B0__CTOR_OFFSET))(this);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_2_4237F569373F13B0__CCTOR_OFFSET))();
	}

	::System::Void Method_2_7B2B1A512A5C358D(::Class_3_F41D242A20F8FE06* a1, ::Class_2_14986121AA61AD99* a2, ::Class_2_8CAD669444D1F6DE* a3, ::Class_2_0F138252A5783001* a4)
	{
		return ((::System::Void(*)(::PVOID, ::Class_3_F41D242A20F8FE06*, ::Class_2_14986121AA61AD99*, ::Class_2_8CAD669444D1F6DE*, ::Class_2_0F138252A5783001*))((::PBYTE)hIl2Cpp + CLASS_2_4237F569373F13B0_METHOD_2_7B2B1A512A5C358D_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Void Method_2_40E03D354D1ACC85()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_4237F569373F13B0_METHOD_2_40E03D354D1ACC85_OFFSET))(this);
	}

	::System::Void Method_2_1659BCB6D1A9FC34()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_4237F569373F13B0_METHOD_2_1659BCB6D1A9FC34_OFFSET))(this);
	}

	::System::Void Method_2_98511BB23D2E3748(::Class_2_E4A383A32564601B* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_E4A383A32564601B*))((::PBYTE)hIl2Cpp + CLASS_2_4237F569373F13B0_METHOD_2_98511BB23D2E3748_OFFSET))(this, a1);
	}

	::System::Void Method_2_D51B57322AA430CA(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_4237F569373F13B0_METHOD_2_D51B57322AA430CA_OFFSET))(this, a1);
	}

	::System::Void Method_2_4A958D3D056F27B7(::Struct_2_3A83F3B65F412502& a1)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_3A83F3B65F412502&))((::PBYTE)hIl2Cpp + CLASS_2_4237F569373F13B0_METHOD_2_4A958D3D056F27B7_OFFSET))(this, a1);
	}

	::System::Boolean Method_2_55CBDDF756DAED1D(::Class_1_B7E341C5F1A6F199* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_B7E341C5F1A6F199*))((::PBYTE)hIl2Cpp + CLASS_2_4237F569373F13B0_METHOD_2_55CBDDF756DAED1D_OFFSET))(this, a1);
	}

	::System::Boolean Method_2_F2991A902CA63635(::Class_1_B7E341C5F1A6F199* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_B7E341C5F1A6F199*))((::PBYTE)hIl2Cpp + CLASS_2_4237F569373F13B0_METHOD_2_F2991A902CA63635_OFFSET))(this, a1);
	}

	::System::Void Method_2_96F6E9EA89A38FD1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_4237F569373F13B0_METHOD_2_96F6E9EA89A38FD1_OFFSET))(this);
	}

	::System::Void Method_2_F4F1E7D1CC26024A(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_4237F569373F13B0_METHOD_2_F4F1E7D1CC26024A_OFFSET))(this, a1);
	}

	::System::Void Method_2_2685B6183E614529(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_4237F569373F13B0_METHOD_2_2685B6183E614529_OFFSET))(this, a1);
	}

	::System::Boolean Method_2_6EADDB204A4C60FC(::Class_3_F35B080B137ECC46* a1, ::System::Collections::Generic::List_1<::UnityEngine::Collider*>* a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_3_F35B080B137ECC46*, ::System::Collections::Generic::List_1<::UnityEngine::Collider*>*))((::PBYTE)hIl2Cpp + CLASS_2_4237F569373F13B0_METHOD_2_6EADDB204A4C60FC_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_4237F569373F13B0_METHOD_2_CA373AA1C7054598_OFFSET))(this);
	}

	::System::Void Method_2_23AFB2EE0CDF75BD(::MoleMole::Battle::Entity* a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + CLASS_2_4237F569373F13B0_METHOD_2_23AFB2EE0CDF75BD_OFFSET))(this, a1);
	}

	::System::Void Method_2_BBFA454EC3788EA6(::UnityEngine::Collider* a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Collider*))((::PBYTE)hIl2Cpp + CLASS_2_4237F569373F13B0_METHOD_2_BBFA454EC3788EA6_OFFSET))(this, a1);
	}

	::System::Void Method_2_45AA2F5085C2C40D()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_4237F569373F13B0_METHOD_2_45AA2F5085C2C40D_OFFSET))(this);
	}

	::System::Boolean Method_2_70589F89E4D22649()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_4237F569373F13B0_METHOD_2_70589F89E4D22649_OFFSET))(this);
	}

	::System::Void Method_2_FB61A10508D8E380(::MoleMole::Battle::Entity* a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + CLASS_2_4237F569373F13B0_METHOD_2_FB61A10508D8E380_OFFSET))(this, a1);
	}

	::System::Void Method_2_088B50B583DFD4E2(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_4237F569373F13B0_METHOD_2_088B50B583DFD4E2_OFFSET))(this, a1);
	}

	::System::Void Method_2_8B4B3FEAD1B0C4A6()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_4237F569373F13B0_METHOD_2_8B4B3FEAD1B0C4A6_OFFSET))(this);
	}

	::System::Void Method_2_A52D4E0DDDA2693D(::MoleMole::Battle::Entity* a1, ::UnityEngine::Collider* a2)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*, ::UnityEngine::Collider*))((::PBYTE)hIl2Cpp + CLASS_2_4237F569373F13B0_METHOD_2_A52D4E0DDDA2693D_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_CD9F3CEFB366C27A()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_4237F569373F13B0_METHOD_2_CD9F3CEFB366C27A_OFFSET))(this);
	}

	::System::Void Method_2_2EAA21E8B2B8E133(::UnityEngine::Collider* a1, ::System::Object* a2)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Collider*, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_4237F569373F13B0_METHOD_2_2EAA21E8B2B8E133_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_31CF909FE034F62F(::MoleMole::Battle::Entity* a1, ::UnityEngine::Collider* a2)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*, ::UnityEngine::Collider*))((::PBYTE)hIl2Cpp + CLASS_2_4237F569373F13B0_METHOD_2_31CF909FE034F62F_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_2_2A6B87C525933554(::Class_1_B7E341C5F1A6F199* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_B7E341C5F1A6F199*))((::PBYTE)hIl2Cpp + CLASS_2_4237F569373F13B0_METHOD_2_2A6B87C525933554_OFFSET))(this, a1);
	}

	::System::Void Method_2_FE619656727840B1(::UnityEngine::Collider* a1, ::System::Object* a2)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Collider*, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_4237F569373F13B0_METHOD_2_FE619656727840B1_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_F7810952FE14E15C()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_4237F569373F13B0_METHOD_2_F7810952FE14E15C_OFFSET))(this);
	}

	::System::Void Method_2_C99C0F2C013B0BE0(::UnityEngine::Collider* a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Collider*))((::PBYTE)hIl2Cpp + CLASS_2_4237F569373F13B0_METHOD_2_C99C0F2C013B0BE0_OFFSET))(this, a1);
	}

	::System::Void Method_2_EC73283227CA25E8(::MoleMole::Battle::Entity* a1, ::System::Boolean a2)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_4237F569373F13B0_METHOD_2_EC73283227CA25E8_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_E6FA84ECDEF620CE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_4237F569373F13B0_METHOD_2_E6FA84ECDEF620CE_OFFSET))(this);
	}

	::System::Void Method_2_247244D4DA8509BE(::System::Collections::Generic::HashSet_1<::UnityEngine::Collider*>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::HashSet_1<::UnityEngine::Collider*>*))((::PBYTE)hIl2Cpp + CLASS_2_4237F569373F13B0_METHOD_2_247244D4DA8509BE_OFFSET))(this, a1);
	}

	::System::Void Method_2_CA373AA1C7054598_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_4237F569373F13B0_METHOD_2_CA373AA1C7054598_1_OFFSET))(this);
	}

	::MoleMole::Battle::Entity* Method_2_0254BCE02D3CF10C(::System::String* a1, ::UnityEngine::Vector3 a2, ::UnityEngine::Vector3 a3, ::UnityEngine::Transform* a4)
	{
		return ((::MoleMole::Battle::Entity*(*)(::PVOID, ::System::String*, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + CLASS_2_4237F569373F13B0_METHOD_2_0254BCE02D3CF10C_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Void Method_2_7619D93B61B6E841(::Class_3_F41D242A20F8FE06* a1, ::Class_2_14986121AA61AD99* a2, ::Class_2_8CAD669444D1F6DE* a3, ::Class_2_0F138252A5783001* a4)
	{
		return ((::System::Void(*)(::PVOID, ::Class_3_F41D242A20F8FE06*, ::Class_2_14986121AA61AD99*, ::Class_2_8CAD669444D1F6DE*, ::Class_2_0F138252A5783001*))((::PBYTE)hIl2Cpp + CLASS_2_4237F569373F13B0_METHOD_2_7619D93B61B6E841_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Void Method_2_1EA0C3C861855A26(::System::Boolean a1, ::MoleMole::Battle::Entity* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + CLASS_2_4237F569373F13B0_METHOD_2_1EA0C3C861855A26_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_60E1F7F58CCF739F()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_4237F569373F13B0_METHOD_2_60E1F7F58CCF739F_OFFSET))(this);
	}

	::System::Boolean Method_2_F0088C88851A7DFB()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_4237F569373F13B0_METHOD_2_F0088C88851A7DFB_OFFSET))(this);
	}

	::System::Boolean Method_2_1AF099404F24215A(::MoleMole::Battle::Entity* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + CLASS_2_4237F569373F13B0_METHOD_2_1AF099404F24215A_OFFSET))(this, a1);
	}

	::System::Void Method_2_8CE0803574BB66D7(::Struct_2_3A83F3B65F412502& a1)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_3A83F3B65F412502&))((::PBYTE)hIl2Cpp + CLASS_2_4237F569373F13B0_METHOD_2_8CE0803574BB66D7_OFFSET))(this, a1);
	}

	::System::Void Method_2_CA373AA1C7054598_2()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_4237F569373F13B0_METHOD_2_CA373AA1C7054598_2_OFFSET))(this);
	}

	::System::Boolean Method_2_2A6B87C525933554_1(::Class_1_B7E341C5F1A6F199* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_B7E341C5F1A6F199*))((::PBYTE)hIl2Cpp + CLASS_2_4237F569373F13B0_METHOD_2_2A6B87C525933554_1_OFFSET))(this, a1);
	}

	::System::Void Method_2_D3ECAA2B74ABF01D(::MoleMole::Battle::Entity* a1, ::System::Collections::Generic::List_1<::UnityEngine::Collider*>* a2)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*, ::System::Collections::Generic::List_1<::UnityEngine::Collider*>*))((::PBYTE)hIl2Cpp + CLASS_2_4237F569373F13B0_METHOD_2_D3ECAA2B74ABF01D_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_289F28027FF47717()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_4237F569373F13B0_METHOD_2_289F28027FF47717_OFFSET))(this);
	}

	::System::Void Method_2_98511BB23D2E3748_1(::Class_2_E4A383A32564601B* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_E4A383A32564601B*))((::PBYTE)hIl2Cpp + CLASS_2_4237F569373F13B0_METHOD_2_98511BB23D2E3748_1_OFFSET))(this, a1);
	}
};
