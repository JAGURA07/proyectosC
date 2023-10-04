n=10;
p=10*rand(n,2)-5;
pm=0.1;
pc=0.8

P1=randperm(n,n);
P2=randperm(n,n);

H=zeros(n,2);
for i=1:2:n-1
  g1=torneoBinario(P(p1(i)),:),P(P1(i+1),:),F(P1(i)),F(P1(i+1));
  g1=torneoBinario(P(p2(i)),:),P(P2(i+1),:),F(P2(i)),F(P2(i+1));
  if rand()<pc
    [h1,h2]=cruza(g1,g2);
    H([i,i+1],:)=[h1;h2];
  else
    H([i,i+1],:)=[g1;g2];
  end
end 

M=H
for i=1:n
  if rand()<pm
    M(i,:)=mutacion(H(i,:));
  end
 end
 
 Fh=fitness(H);
 
 [F,Fh]
 
 G=[P;H]
 Fg=[F;Fh];
 
 [~,indx]=sort[Fg]
 
 P=G(indx(1:n),:)
 F=Gg(indx(1:n))